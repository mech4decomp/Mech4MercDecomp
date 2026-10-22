/*
 * FUN_006a75c0 (328 B) — Switch on param_3 (0/1/2/other) to fill a 12-byte
 * output struct (param_1) from various sources: a virtual method result,
 * a helper call FUN_00419480, or a direct copy from param_4.
 *
 * Uses indirect virtual calls through vtable offsets (0x34/0x3c/0x44/0xf8)
 * and FPU float copies.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_799e2c;
extern void __cdecl FUN_00419480(void);

__declspec(naked) void __cdecl FUN_006a75c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 0x18
        sub     eax, 0
        push    esi
        jz      L_76CD
        dec     eax
        jz      L_7685
        dec     eax
        jz      L_75F8
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        pop     esi
        add     esp, 0x18
        ret
L_75F8:
        mov     esi, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx + 0x44]
        test    eax, eax
        jnz     L_7646
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0xac]
        fld     dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [esp + 0x20]
        fxch
        fstp    dword ptr [eax]
        mov     edx, ecx
        mov     dword ptr [esp + 0x18], ecx
        fstp    dword ptr [eax + 0x4]
        mov     dword ptr [eax + 0x8], edx
        pop     esi
        add     esp, 0x18
        ret
L_7646:
        mov     ecx, dword ptr [g_799e2c]
        mov     edx, dword ptr [eax]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xf8]
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp + 0x4], edx
        fld     dword ptr [eax + 0x4]
        fst     dword ptr [esp + 0x8]
        pop     esi
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [esp + 0x1c]
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (emits D9 04 24); ref needs D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fstp    dword ptr [eax]
        fxch
        fstp    dword ptr [eax + 0x4]
        fstp    dword ptr [eax + 0x8]
        add     esp, 0x18
        ret
L_7685:
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [g_799e2c]
        mov     edx, dword ptr [eax]
        push    0x0
        push    ecx
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xf8]
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp + 0x4], edx
        fld     dword ptr [eax + 0x4]
        fst     dword ptr [esp + 0x8]
        pop     esi
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [esp + 0x1c]
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (emits D9 04 24); ref needs D9 44 24 00 */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fstp    dword ptr [eax]
        fxch
        fstp    dword ptr [eax + 0x4]
        fstp    dword ptr [eax + 0x8]
        add     esp, 0x18
        ret
L_76CD:
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00419480
        fld     dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        fstp    dword ptr [eax]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        pop     esi
        add     esp, 0x18
        ret
    }
}
