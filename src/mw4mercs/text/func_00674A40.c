/*
 * FUN_00674A40 (187 B) — __cdecl, 5 args, returns a byte flag in al.
 * Dispatches to 0x674890, then based on a type field and a float value
 * at [esi+0x34] calls a function pointer from 0x76b424 with a format
 * string, returning 0 on certain float conditions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_76d064;
extern void *g_76b424;

extern void __cdecl FUN_00674890(void);

__declspec(naked) char FUN_00674A40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        mov     bl, byte ptr [eax]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    ebp
        test    bl, bl
        mov     ebx, dword ptr [esp + 0x24]
        push    ebx
        push    eax
        push    edi
        push    esi
        setne   byte ptr [esp + 0x30]
        call    FUN_00674890
        mov     cl, al
        mov     eax, dword ptr [edi + 0x10]
        add     esp, 0x14
        cmp     eax, 0xb
        jne     L_674af4
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        jne     L_674a97
        mov     eax, dword ptr [edi]
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x24], 0x3e99999a
        call    dword ptr [eax + 4]
        mov     cl, 1
L_674a97:
        fld     dword ptr [esi + 0x34]
        mov     edi, dword ptr [g_76b424]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6            /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        je      L_674ac6
        fld     dword ptr [esi + 0x34]
        mov     edx, dword ptr [ebx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x797378
        push    ebp
        push    edx
        call    edi
        add     esp, 0x14
        xor     cl, cl
L_674ac6:
        fld     dword ptr [esi + 0x34]
        fcomp   dword ptr [g_76d064]
        __emit 0xDF            /* fnstsw ax: no-WAIT */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jne     L_674af4
        fld     dword ptr [esi + 0x34]
        mov     eax, dword ptr [ebx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x797334
        push    ebp
        push    eax
        call    edi
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret
L_674af4:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, cl
        pop     ebx
        ret
    }
}
