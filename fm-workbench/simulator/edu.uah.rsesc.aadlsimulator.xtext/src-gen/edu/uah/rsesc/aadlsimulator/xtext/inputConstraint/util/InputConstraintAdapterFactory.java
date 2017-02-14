/**
 */
package edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.util;

import edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.*;

import org.eclipse.emf.common.notify.Adapter;
import org.eclipse.emf.common.notify.Notifier;

import org.eclipse.emf.common.notify.impl.AdapterFactoryImpl;

import org.eclipse.emf.ecore.EObject;

/**
 * <!-- begin-user-doc -->
 * The <b>Adapter Factory</b> for the model.
 * It provides an adapter <code>createXXX</code> method for each class of the model.
 * <!-- end-user-doc -->
 * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.InputConstraintPackage
 * @generated
 */
public class InputConstraintAdapterFactory extends AdapterFactoryImpl
{
  /**
   * The cached model package.
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  protected static InputConstraintPackage modelPackage;

  /**
   * Creates an instance of the adapter factory.
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  public InputConstraintAdapterFactory()
  {
    if (modelPackage == null)
    {
      modelPackage = InputConstraintPackage.eINSTANCE;
    }
  }

  /**
   * Returns whether this factory is applicable for the type of the object.
   * <!-- begin-user-doc -->
   * This implementation returns <code>true</code> if the object is either the model's package or is an instance object of the model.
   * <!-- end-user-doc -->
   * @return whether this factory is applicable for the type of the object.
   * @generated
   */
  @Override
  public boolean isFactoryForType(Object object)
  {
    if (object == modelPackage)
    {
      return true;
    }
    if (object instanceof EObject)
    {
      return ((EObject)object).eClass().getEPackage() == modelPackage;
    }
    return false;
  }

  /**
   * The switch that delegates to the <code>createXXX</code> methods.
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @generated
   */
  protected InputConstraintSwitch<Adapter> modelSwitch =
    new InputConstraintSwitch<Adapter>()
    {
      @Override
      public Adapter caseInputConstraint(InputConstraint object)
      {
        return createInputConstraintAdapter();
      }
      @Override
      public Adapter caseExpression(Expression object)
      {
        return createExpressionAdapter();
      }
      @Override
      public Adapter caseScalarExpression(ScalarExpression object)
      {
        return createScalarExpressionAdapter();
      }
      @Override
      public Adapter caseRandomExpression(RandomExpression object)
      {
        return createRandomExpressionAdapter();
      }
      @Override
      public Adapter caseRefExpression(RefExpression object)
      {
        return createRefExpressionAdapter();
      }
      @Override
      public Adapter caseIntervalExpression(IntervalExpression object)
      {
        return createIntervalExpressionAdapter();
      }
      @Override
      public Adapter caseSetExpression(SetExpression object)
      {
        return createSetExpressionAdapter();
      }
      @Override
      public Adapter caseIntegerLiteral(IntegerLiteral object)
      {
        return createIntegerLiteralAdapter();
      }
      @Override
      public Adapter caseRealLiteral(RealLiteral object)
      {
        return createRealLiteralAdapter();
      }
      @Override
      public Adapter caseBooleanLiteral(BooleanLiteral object)
      {
        return createBooleanLiteralAdapter();
      }
      @Override
      public Adapter caseBinaryExpression(BinaryExpression object)
      {
        return createBinaryExpressionAdapter();
      }
      @Override
      public Adapter casePreExpression(PreExpression object)
      {
        return createPreExpressionAdapter();
      }
      @Override
      public Adapter caseRandomIntegerExpression(RandomIntegerExpression object)
      {
        return createRandomIntegerExpressionAdapter();
      }
      @Override
      public Adapter caseRandomRealExpression(RandomRealExpression object)
      {
        return createRandomRealExpressionAdapter();
      }
      @Override
      public Adapter caseRandomElementExpression(RandomElementExpression object)
      {
        return createRandomElementExpressionAdapter();
      }
      @Override
      public Adapter caseElementRefExpression(ElementRefExpression object)
      {
        return createElementRefExpressionAdapter();
      }
      @Override
      public Adapter caseConstRefExpression(ConstRefExpression object)
      {
        return createConstRefExpressionAdapter();
      }
      @Override
      public Adapter caseNegativeExpression(NegativeExpression object)
      {
        return createNegativeExpressionAdapter();
      }
      @Override
      public Adapter defaultCase(EObject object)
      {
        return createEObjectAdapter();
      }
    };

  /**
   * Creates an adapter for the <code>target</code>.
   * <!-- begin-user-doc -->
   * <!-- end-user-doc -->
   * @param target the object to adapt.
   * @return the adapter for the <code>target</code>.
   * @generated
   */
  @Override
  public Adapter createAdapter(Notifier target)
  {
    return modelSwitch.doSwitch((EObject)target);
  }


  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.InputConstraint <em>Input Constraint</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.InputConstraint
   * @generated
   */
  public Adapter createInputConstraintAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.Expression <em>Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.Expression
   * @generated
   */
  public Adapter createExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.ScalarExpression <em>Scalar Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.ScalarExpression
   * @generated
   */
  public Adapter createScalarExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RandomExpression <em>Random Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RandomExpression
   * @generated
   */
  public Adapter createRandomExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RefExpression <em>Ref Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RefExpression
   * @generated
   */
  public Adapter createRefExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.IntervalExpression <em>Interval Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.IntervalExpression
   * @generated
   */
  public Adapter createIntervalExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.SetExpression <em>Set Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.SetExpression
   * @generated
   */
  public Adapter createSetExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.IntegerLiteral <em>Integer Literal</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.IntegerLiteral
   * @generated
   */
  public Adapter createIntegerLiteralAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RealLiteral <em>Real Literal</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RealLiteral
   * @generated
   */
  public Adapter createRealLiteralAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.BooleanLiteral <em>Boolean Literal</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.BooleanLiteral
   * @generated
   */
  public Adapter createBooleanLiteralAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.BinaryExpression <em>Binary Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.BinaryExpression
   * @generated
   */
  public Adapter createBinaryExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.PreExpression <em>Pre Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.PreExpression
   * @generated
   */
  public Adapter createPreExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RandomIntegerExpression <em>Random Integer Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RandomIntegerExpression
   * @generated
   */
  public Adapter createRandomIntegerExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RandomRealExpression <em>Random Real Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RandomRealExpression
   * @generated
   */
  public Adapter createRandomRealExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RandomElementExpression <em>Random Element Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.RandomElementExpression
   * @generated
   */
  public Adapter createRandomElementExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.ElementRefExpression <em>Element Ref Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.ElementRefExpression
   * @generated
   */
  public Adapter createElementRefExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.ConstRefExpression <em>Const Ref Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.ConstRefExpression
   * @generated
   */
  public Adapter createConstRefExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for an object of class '{@link edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.NegativeExpression <em>Negative Expression</em>}'.
   * <!-- begin-user-doc -->
   * This default implementation returns null so that we can easily ignore cases;
   * it's useful to ignore a case when inheritance will catch all the cases anyway.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @see edu.uah.rsesc.aadlsimulator.xtext.inputConstraint.NegativeExpression
   * @generated
   */
  public Adapter createNegativeExpressionAdapter()
  {
    return null;
  }

  /**
   * Creates a new adapter for the default case.
   * <!-- begin-user-doc -->
   * This default implementation returns null.
   * <!-- end-user-doc -->
   * @return the new adapter.
   * @generated
   */
  public Adapter createEObjectAdapter()
  {
    return null;
  }

} //InputConstraintAdapterFactory