/*
Copyright (c) 2011, 2013 Rockwell Collins and the University of Minnesota.
Developed with the sponsorship of the Defense Advanced Research Projects Agency (DARPA).

Permission is hereby granted, free of charge, to any person obtaining a copy of this data, 
including any software or models in source or binary form, as well as any drawings, specifications, 
and documentation (collectively "the Data"), to deal in the Data without restriction, including
without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
and/or sell copies of the Data, and to permit persons to whom the Data is furnished to do so, 
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or 
substantial portions of the Data.

THE DATA IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT 
LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
IN NO EVENT SHALL THE AUTHORS, SPONSORS, DEVELOPERS, CONTRIBUTORS, OR COPYRIGHT HOLDERS BE LIABLE 
FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
ARISING FROM, OUT OF OR IN CONNECTION WITH THE DATA OR THE USE OR OTHER DEALINGS IN THE DATA.
*/

package edu.umn.cs.crisys.smaccm.aadl2camkes.ast;

import java.util.Hashtable;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;


public class RecordType extends Type {
	final private Map<String, Type> fields = new Hashtable<String, Type>();
	
	public boolean isBaseType() { return false; }
	
	public void addField(String name, Type type) {
		fields.put(name.toLowerCase(), type);
	}
	
	public Type getField(String name) {
		return fields.get(name.toLowerCase());
	}
	
	public Set<String> getFieldNames() {
		return fields.keySet();
	}
	
	@Override
	public String toString() {
		StringBuilder buf = new StringBuilder();
		buf.append("{ \n");
		
		Iterator<String> iterator = getFieldNames().iterator();
		while (iterator.hasNext()) {
			String field = iterator.next();
			buf.append("   "); 
			buf.append(getField(field));
			buf.append(" "); 
			buf.append(field);
			buf.append(" ; \n");
		}
		
		buf.append("}");
		return buf.toString();
	}

/*	@Override
	public Expr getDefaultValue() {
		Map<String, Expr> fieldValues = new Hashtable<String, Expr>();
		for (String field : getFieldNames()) {
			fieldValues.put(field, getField(field).getDefaultValue());
		}
		return new RecordExpr(fieldValues);
	}

	public Expr createFlattenedExpr(String idPrefix, String originalNamePrefix) {
		Map<String, Expr> result = new Hashtable<String, Expr>();
		for (String field : getFieldNames()) {
			String flatFieldName = idPrefix + "_" + field;
			String flatOriginalName = originalNamePrefix + "." + field;
			Type type = getField(field);
			if (type instanceof RecordType) {
				RecordType rt = (RecordType) type;
				result.put(field, rt.createFlattenedExpr(flatFieldName, flatOriginalName));
			} else {
				result.put(field, new IdExpr(flatFieldName, type, flatOriginalName));
			}
		}
		return new RecordExpr(result);
	}
*/
	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((fields == null) ? 0 : fields.hashCode());
		return result;
	}

	// Equality is structural (and auto-generated by Eclipse)
	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (!(obj instanceof RecordType))
			return false;
		RecordType other = (RecordType) obj;
		if (fields == null) {
			if (other.fields != null)
				return false;
		} else if (!fields.equals(other.fields))
			return false;
		return true;
	}
}
