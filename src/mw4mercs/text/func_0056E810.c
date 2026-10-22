/*
 * FUN_0056E810 (230 B) — in-.text data block function (block 0x56E640).
 * Tokenizer/parser using globals 0x805918/0x805908/0x80592c/0x805928/
 * 0x80d9bc/0x80d9b0; FPU compare; calls FUN_0064db40 / FUN_0064c950 /
 * FUN_00563060.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_00563060(void);

extern int g_00805918;   /* DAT_00805918 */
extern int g_00805908;   /* DAT_00805908 */
extern int g_0080592c;   /* DAT_0080592c */
extern int g_00805928;   /* DAT_00805928 */
extern int g_0080d9bc;   /* DAT_0080d9bc */
extern int g_0080d9b0;   /* DAT_0080d9b0 */

__declspec(naked) void FUN_0056E810(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        mov     dword ptr [g_00805908], ecx
        mov     dword ptr [g_00805918], eax
        call    FUN_0064db40
        push    eax
        call    FUN_0064c950
        mov     ecx, dword ptr [g_0080d9bc]
        add     esp, 4
        cmp     eax, ecx
        mov     eax, dword ptr [g_0080592c]
        jne     L8848
        fild    dword ptr [eax]
        fstp    dword ptr [eax]
L8848:
        mov     edx, dword ptr [eax]
        sub     eax, 4
        mov     dword ptr [g_0080592c], eax
        mov     eax, dword ptr [g_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        __emit 0x89   /* __emit: mov [esp],edx — MSVC6 drops the 00 disp byte (89 54 24 00 vs 89 14 24) */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        mov     dword ptr [g_00805908], ecx
        mov     dword ptr [g_00805918], eax
        call    FUN_0064db40
        push    eax
        call    FUN_0064c950
        mov     ecx, dword ptr [g_0080d9bc]
        add     esp, 4
        cmp     eax, ecx
        mov     ecx, dword ptr [g_0080592c]
        jne     L888C
        fild    dword ptr [ecx]
        fstp    dword ptr [ecx]
L888C:
        fld     dword ptr [ecx]
        push    ebx
        fld     dword ptr [esp + 4]
        sub     ecx, 4
        fcomp   st(1)
        push    esi
        fnstsw  ax
        fstp    st(0)
        __emit 0xF6   /* __emit: test ah,1 — MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        je      L88A9
        mov     ebx, 1
        jmp     L88AB
L88A9:
        xor     ebx, ebx
L88AB:
        mov     edx, dword ptr [g_00805928]
        add     ecx, 4
        mov     esi, ecx
        add     edx, 0xa000
        cmp     esi, edx
        mov     dword ptr [g_0080592c], ecx
        jb      L88D0
        push    0
        call    FUN_00563060
        add     esp, 4
L88D0:
        xor     eax, eax
        test    bl, bl
        setne   al
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [g_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        pop     esi
        mov     dword ptr [g_00805918], eax
        mov     eax, dword ptr [g_0080d9b0]
        mov     dword ptr [g_00805908], ecx
        pop     ebx
        pop     ecx
        ret
    }
}
