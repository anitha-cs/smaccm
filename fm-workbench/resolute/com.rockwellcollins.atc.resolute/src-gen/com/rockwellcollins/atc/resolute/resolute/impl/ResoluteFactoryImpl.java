/**
 */
package com.rockwellcollins.atc.resolute.resolute.impl;

import com.rockwellcollins.atc.resolute.resolute.*;

import org.eclipse.emf.ecore.EClass;
import org.eclipse.emf.ecore.EObject;
import org.eclipse.emf.ecore.EPackage;

import org.eclipse.emf.ecore.impl.EFactoryImpl;

import org.eclipse.emf.ecore.plugin.EcorePlugin;

/**
 * <!-- begin-user-doc -->
 * An implementation of the model <b>Factory</b>.
 * <!-- end-user-doc -->
 * @generated
 */
public class ResoluteFactoryImpl extends EFactoryImpl implements ResoluteFactory
{
  /**
   * Creates the default factory implementation.
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public static ResoluteFactory init()
  {
    try
    {
      ResoluteFactory theResoluteFactory = (ResoluteFactory)EPackage.Registry.INSTANCE.getEFactory(ResolutePackage.eNS_URI);
      if (theResoluteFactory != null)
      {
        return theResoluteFactory;
      }
    }
    catch (Exception exception)
    {
      EcorePlugin.INSTANCE.log(exception);
    }
    return new ResoluteFactoryImpl();
  }

  /**
   * Creates an instance of the factory.
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public ResoluteFactoryImpl()
  {
    super();
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  @Override
  public EObject create(EClass eClass)
  {
    switch (eClass.getClassifierID())
    {
      case ResolutePackage.RESOLUTE_LIBRARY: return createResoluteLibrary();
      case ResolutePackage.DEFINITION: return createDefinition();
      case ResolutePackage.TYPE: return createType();
      case ResolutePackage.ELEMENT_SET: return createElementSet();
      case ResolutePackage.BUILTIN_TYPE: return createBuiltinType();
      case ResolutePackage.ARG: return createArg();
      case ResolutePackage.CONSTANT_DEFINITION: return createConstantDefinition();
      case ResolutePackage.FUNCTION_DEFINITION: return createFunctionDefinition();
      case ResolutePackage.CLAIM_STRING: return createClaimString();
      case ResolutePackage.DEFINITION_BODY: return createDefinitionBody();
      case ResolutePackage.EXPR: return createExpr();
      case ResolutePackage.RESOLUTE_SUBCLAUSE: return createResoluteSubclause();
      case ResolutePackage.NESTED_DOT_ID: return createNestedDotID();
      case ResolutePackage.PROVE_STATEMENT: return createProveStatement();
      case ResolutePackage.SET_TYPE: return createSetType();
      case ResolutePackage.CLAIM_ARG: return createClaimArg();
      case ResolutePackage.FUNC_BODY: return createFuncBody();
      case ResolutePackage.CLAIM_BODY: return createClaimBody();
      case ResolutePackage.BINARY_EXPR: return createBinaryExpr();
      case ResolutePackage.UNARY_EXPR: return createUnaryExpr();
      case ResolutePackage.ID_EXPR: return createIdExpr();
      case ResolutePackage.THIS_EXPR: return createThisExpr();
      case ResolutePackage.FAIL_EXPR: return createFailExpr();
      case ResolutePackage.INT_EXPR: return createIntExpr();
      case ResolutePackage.REAL_EXPR: return createRealExpr();
      case ResolutePackage.BOOL_EXPR: return createBoolExpr();
      case ResolutePackage.STRING_EXPR: return createStringExpr();
      case ResolutePackage.IF_THEN_ELSE_EXPR: return createIfThenElseExpr();
      case ResolutePackage.QUANTIFIED_EXPR: return createQuantifiedExpr();
      case ResolutePackage.BUILT_IN_FUNC_CALL_EXPR: return createBuiltInFuncCallExpr();
      case ResolutePackage.FN_CALL_EXPR: return createFnCallExpr();
      case ResolutePackage.FILTER_MAP_EXPR: return createFilterMapExpr();
      case ResolutePackage.QUANT_ARG: return createQuantArg();
      default:
        throw new IllegalArgumentException("The class '" + eClass.getName() + "' is not a valid classifier");
    }
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public ResoluteLibrary createResoluteLibrary()
  {
    ResoluteLibraryImpl resoluteLibrary = new ResoluteLibraryImpl();
    return resoluteLibrary;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public Definition createDefinition()
  {
    DefinitionImpl definition = new DefinitionImpl();
    return definition;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public Type createType()
  {
    TypeImpl type = new TypeImpl();
    return type;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public ElementSet createElementSet()
  {
    ElementSetImpl elementSet = new ElementSetImpl();
    return elementSet;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public BuiltinType createBuiltinType()
  {
    BuiltinTypeImpl builtinType = new BuiltinTypeImpl();
    return builtinType;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public Arg createArg()
  {
    ArgImpl arg = new ArgImpl();
    return arg;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public ConstantDefinition createConstantDefinition()
  {
    ConstantDefinitionImpl constantDefinition = new ConstantDefinitionImpl();
    return constantDefinition;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public FunctionDefinition createFunctionDefinition()
  {
    FunctionDefinitionImpl functionDefinition = new FunctionDefinitionImpl();
    return functionDefinition;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public ClaimString createClaimString()
  {
    ClaimStringImpl claimString = new ClaimStringImpl();
    return claimString;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public DefinitionBody createDefinitionBody()
  {
    DefinitionBodyImpl definitionBody = new DefinitionBodyImpl();
    return definitionBody;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public Expr createExpr()
  {
    ExprImpl expr = new ExprImpl();
    return expr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public ResoluteSubclause createResoluteSubclause()
  {
    ResoluteSubclauseImpl resoluteSubclause = new ResoluteSubclauseImpl();
    return resoluteSubclause;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public NestedDotID createNestedDotID()
  {
    NestedDotIDImpl nestedDotID = new NestedDotIDImpl();
    return nestedDotID;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public ProveStatement createProveStatement()
  {
    ProveStatementImpl proveStatement = new ProveStatementImpl();
    return proveStatement;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public SetType createSetType()
  {
    SetTypeImpl setType = new SetTypeImpl();
    return setType;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public ClaimArg createClaimArg()
  {
    ClaimArgImpl claimArg = new ClaimArgImpl();
    return claimArg;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public FuncBody createFuncBody()
  {
    FuncBodyImpl funcBody = new FuncBodyImpl();
    return funcBody;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public ClaimBody createClaimBody()
  {
    ClaimBodyImpl claimBody = new ClaimBodyImpl();
    return claimBody;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public BinaryExpr createBinaryExpr()
  {
    BinaryExprImpl binaryExpr = new BinaryExprImpl();
    return binaryExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public UnaryExpr createUnaryExpr()
  {
    UnaryExprImpl unaryExpr = new UnaryExprImpl();
    return unaryExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public IdExpr createIdExpr()
  {
    IdExprImpl idExpr = new IdExprImpl();
    return idExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public ThisExpr createThisExpr()
  {
    ThisExprImpl thisExpr = new ThisExprImpl();
    return thisExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public FailExpr createFailExpr()
  {
    FailExprImpl failExpr = new FailExprImpl();
    return failExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public IntExpr createIntExpr()
  {
    IntExprImpl intExpr = new IntExprImpl();
    return intExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public RealExpr createRealExpr()
  {
    RealExprImpl realExpr = new RealExprImpl();
    return realExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public BoolExpr createBoolExpr()
  {
    BoolExprImpl boolExpr = new BoolExprImpl();
    return boolExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public StringExpr createStringExpr()
  {
    StringExprImpl stringExpr = new StringExprImpl();
    return stringExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public IfThenElseExpr createIfThenElseExpr()
  {
    IfThenElseExprImpl ifThenElseExpr = new IfThenElseExprImpl();
    return ifThenElseExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public QuantifiedExpr createQuantifiedExpr()
  {
    QuantifiedExprImpl quantifiedExpr = new QuantifiedExprImpl();
    return quantifiedExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public BuiltInFuncCallExpr createBuiltInFuncCallExpr()
  {
    BuiltInFuncCallExprImpl builtInFuncCallExpr = new BuiltInFuncCallExprImpl();
    return builtInFuncCallExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public FnCallExpr createFnCallExpr()
  {
    FnCallExprImpl fnCallExpr = new FnCallExprImpl();
    return fnCallExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public FilterMapExpr createFilterMapExpr()
  {
    FilterMapExprImpl filterMapExpr = new FilterMapExprImpl();
    return filterMapExpr;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public QuantArg createQuantArg()
  {
    QuantArgImpl quantArg = new QuantArgImpl();
    return quantArg;
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public ResolutePackage getResolutePackage()
  {
    return (ResolutePackage)getEPackage();
  }

  /**
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @deprecated
   * @generated
   */
  @Deprecated
  public static ResolutePackage getPackage()
  {
    return ResolutePackage.eINSTANCE;
  }

} //ResoluteFactoryImpl
