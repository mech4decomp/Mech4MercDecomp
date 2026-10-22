/*
 * FUN_0074e740 (789 B) — D3D FVF (flexible vertex format) description-string
 * builder. Given a D3DFVF flags word (param_2) and a destination buffer
 * (param_1), appends the human-readable component names ("fvf( XYZ NORMAL
 * DIFFUSE ... TEXn )") to the buffer. Special-cases the three canned vertex
 * formats (D3DTLVERTEX/D3DLVERTEX/D3DVERTEX) by returning a static string.
 *
 * __stdcall (RET 8, two dword params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_d3dtlvertex[];   /* 0x7AC328 "D3DTLVERTEX " */
extern char g_d3dlvertex[];    /* 0x7AC31C "D3DLVERTEX "  */
extern char g_d3dvertex[];     /* 0x7AC310 "D3DVERTEX "   */
extern char g_fvf[];           /* 0x7AC308 "fvf( "        */
extern char g_xyz[];           /* 0x7AC300 "XYZ "         */
extern char g_xyzrhw[];        /* 0x7AC2F8 "XYZRHW "      */
extern char g_normal[];        /* 0x7AC2F0 "NORMAL "      */
extern char g_diffuse[];       /* 0x7AC2E4 "DIFFUSE "     */
extern char g_specular[];      /* 0x7AC2D8 "SPECULAR "    */
extern char g_tex1[];          /* 0x7AC2D0 "TEX1 "        */
extern char g_tex2[];          /* 0x7AC2C8 "TEX2 "        */
extern char g_tex3[];          /* 0x7AC2C0 "TEX3 "        */
extern char g_tex4[];          /* 0x7AC2B8 "TEX4 "        */
extern char g_tex5[];          /* 0x7AC2B0 "TEX5 "        */
extern char g_tex6[];          /* 0x7AC2A8 "TEX6 "        */
extern char g_tex7[];          /* 0x7AC2A0 "TEX7 "        */
extern char g_tex8[];          /* 0x7AC298 "TEX8 "        */
extern char g_close[];         /* 0x77E7D8 ")"            */

__declspec(naked) char * __stdcall FUN_0074e740(void *param_1, unsigned int param_2)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xC]
        cmp     ebx, 0x1C4
        jnz     L1
        mov     eax, offset g_d3dtlvertex
        pop     ebx
        ret     0x8
    L1:
        cmp     ebx, 0x1E2
        jnz     L2
        mov     eax, offset g_d3dlvertex
        pop     ebx
        ret     0x8
    L2:
        cmp     ebx, 0x112
        jnz     L3
        mov     eax, offset g_d3dvertex
        pop     ebx
        ret     0x8
    L3:
        mov     edx, dword ptr [esp + 0x8]
        or      ecx, 0xFFFFFFFF
        push    ebp
        push    esi
        push    edi
        xor     eax, eax
        mov     edi, offset g_fvf
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        test    bl, 2
        rep     movsb
        jz      L4
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_xyz
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L4:
        test    bl, 4
        jz      L5
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_xyzrhw
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L5:
        test    bl, 0x10
        jz      L6
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_normal
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L6:
        test    bl, 0x40
        jz      L7
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_diffuse
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L7:
        test    bl, 0x80
        jz      L8
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_specular
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L8:
        and     ebx, 0xF00
        cmp     ebx, 0x100
        jnz     L9
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_tex1
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L9:
        cmp     ebx, 0x200
        jnz     L10
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_tex2
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L10:
        cmp     ebx, 0x300
        jnz     L11
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_tex3
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L11:
        cmp     ebx, 0x400
        jnz     L12
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_tex4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L12:
        cmp     ebx, 0x500
        jnz     L13
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_tex5
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L13:
        cmp     ebx, 0x600
        jnz     L14
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_tex6
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L14:
        cmp     ebx, 0x700
        jnz     L15
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_tex7
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
    L15:
        cmp     ebx, 0x800
        jnz     L16
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_tex8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
    L16:
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, offset g_close
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, edx
        pop     ebx
        ret     0x8
    }
}
