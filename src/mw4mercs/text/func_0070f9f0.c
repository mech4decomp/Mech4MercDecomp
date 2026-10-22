/* func_0070f9f0: gosScript final-region float helper (__stdcall, 1 float arg).
   Clamps/rounds a float against constants. */

extern float g_76c5b0;
extern float g_76d064;
extern double g_76d970;
extern double g_776110;
extern void __cdecl sub_75db4a(void);

__declspec(naked) void func_0070f9f0(void)
{
    __asm {
        push ecx
        fld dword ptr [esp+8]
        fcomp dword ptr [g_76c5b0]
        fld dword ptr [esp+8]
        fnstsw ax
        test ah, 0x1
        jnz L_else
        call sub_75db4a
        __emit 0x89          /* mov dword ptr [esp],eax: MSVC6 drops 00 disp byte (89 04 24 vs ref 89 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xDB          /* fild dword ptr [esp]: MSVC6 drops 00 disp byte (DB 04 24 vs ref DB 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fsubr dword ptr [esp+8]
        fcom qword ptr [g_76d970]
        fnstsw ax
        test ah, 0x40
        jz L_ret
        fld dword ptr [esp+8]
        fcomp qword ptr [g_76d970]
        fnstsw ax
        test ah, 0x40
        jnz L_ret
        fstp st(0)
        fld dword ptr [g_76d064]
        pop ecx
        ret 4
L_else:
        call sub_75db4a
        __emit 0x89          /* mov dword ptr [esp],eax: MSVC6 drops 00 disp byte (89 04 24 vs ref 89 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xDB          /* fild dword ptr [esp]: MSVC6 drops 00 disp byte (DB 04 24 vs ref DB 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fld dword ptr [esp+8]
        fsub st(0), st(1)
        fcomp qword ptr [g_776110]
        fnstsw ax
        test ah, 0x40
        jz L_ret2
        fld dword ptr [esp+8]
        fcomp qword ptr [g_776110]
        fnstsw ax
        test ah, 0x40
        jnz L_ret2
        fstp st(0)
        fld dword ptr [g_76c5b0]
        pop ecx
        ret 4
L_ret2:
        fld dword ptr [esp+8]
        fadd dword ptr [g_76d064]
        fsubrp st(1), st(0)
L_ret:
        pop ecx
        ret 4
    }
}
