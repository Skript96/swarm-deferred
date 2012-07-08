// ALL SKIP STATEMENTS THAT AFFECT THIS SHADER!!!
// defined $PIXELFOGTYPE && defined $WRITEWATERFOGTODESTALPHA && ( $PIXELFOGTYPE != 1 ) && $WRITEWATERFOGTODESTALPHA
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPTINT && $LIGHTING_PREVIEW && $FASTPATHENVMAPTINT
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPCONTRAST && $LIGHTING_PREVIEW && $FASTPATHENVMAPCONTRAST
// defined $LIGHTING_PREVIEW && defined $FASTPATH && $LIGHTING_PREVIEW && $FASTPATH
// ($FLASHLIGHT || $FLASHLIGHTSHADOWS) && $LIGHTING_PREVIEW
// !$MODEL && $MORPHING_VTEX
// !$MODEL && $COMPRESSED_VERTS
// !$MODEL && $SKINNING
// !$MODEL && $MORPHING_VTEX
#include "shaderlib/cshader.h"
class shadowpass_ps30_Static_Index
{
private:
	int m_nALPHATEST;
#ifdef _DEBUG
	bool m_bALPHATEST;
#endif
public:
	void SetALPHATEST( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nALPHATEST = i;
#ifdef _DEBUG
		m_bALPHATEST = true;
#endif
	}
	void SetALPHATEST( bool i )
	{
		m_nALPHATEST = i ? 1 : 0;
#ifdef _DEBUG
		m_bALPHATEST = true;
#endif
	}
public:
	// CONSTRUCTOR
	shadowpass_ps30_Static_Index( IShaderShadow *pShaderShadow, IMaterialVar **params )
	{
#ifdef _DEBUG
		m_bALPHATEST = false;
#endif // _DEBUG
		m_nALPHATEST = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllStaticVarsDefined = m_bALPHATEST;
		Assert( bAllStaticVarsDefined );
#endif // _DEBUG
		return ( 3 * m_nALPHATEST ) + 0;
	}
};
#define shaderStaticTest_shadowpass_ps30 psh_forgot_to_set_static_ALPHATEST + 0
class shadowpass_ps30_Dynamic_Index
{
private:
	int m_nSHADOW_MODE;
#ifdef _DEBUG
	bool m_bSHADOW_MODE;
#endif
public:
	void SetSHADOW_MODE( int i )
	{
		Assert( i >= 0 && i <= 2 );
		m_nSHADOW_MODE = i;
#ifdef _DEBUG
		m_bSHADOW_MODE = true;
#endif
	}
	void SetSHADOW_MODE( bool i )
	{
		m_nSHADOW_MODE = i ? 1 : 0;
#ifdef _DEBUG
		m_bSHADOW_MODE = true;
#endif
	}
public:
	// CONSTRUCTOR
	shadowpass_ps30_Dynamic_Index( IShaderDynamicAPI *pShaderAPI )
	{
#ifdef _DEBUG
		m_bSHADOW_MODE = false;
#endif // _DEBUG
		m_nSHADOW_MODE = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllDynamicVarsDefined = m_bSHADOW_MODE;
		Assert( bAllDynamicVarsDefined );
#endif // _DEBUG
		return ( 1 * m_nSHADOW_MODE ) + 0;
	}
};
#define shaderDynamicTest_shadowpass_ps30 psh_forgot_to_set_dynamic_SHADOW_MODE + 0