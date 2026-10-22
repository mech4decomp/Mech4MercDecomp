/*
 * FUN_00406c10 (127 B) — MessageBoxA wrapper with a global "message box
 * enabled" flag (0x00858954) and a mode dispatch on param_3. __cdecl,
 * 3 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00858954;              /* 0x00858954 */
extern int  g_00858bf8;              /* 0x00858bf8 */
extern void __cdecl FUN_00704820(int, int);
extern int (*g_MessageBoxA)(void *, const char *, const char *, int);   /* 0x0076b598 */

__declspec(naked) int __cdecl FUN_00406c10(char *param_1, char *param_2, int param_3)
{
    __asm {
        push    ecx
        mov     al, byte ptr [g_00858954]
        push    ebx
        xor     bl, bl
        test    al, al
        mov     byte ptr [esp + 0x7], al
        jz      L6C2A
        push    0x0
        push    0x8
        call    FUN_00704820
L6C2A:
        mov     eax, dword ptr [esp + 0x14]
        sub     eax, 0x0
        jz      L6C5A
        dec     eax
        jnz     L6C79
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [g_00858bf8]
        push    0x0
        push    eax
        push    ecx
        push    edx
        call    dword ptr [g_MessageBoxA]
        mov     ebx, eax
        dec     ebx
        neg     ebx
        sbb     bl, bl
        inc     bl
        jmp     L6C79
L6C5A:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [g_00858bf8]
        push    0x5
        push    eax
        push    ecx
        push    edx
        call    dword ptr [g_MessageBoxA]
        cmp     eax, 0x4
        setz    bl
L6C79:
        mov     al, byte ptr [esp + 0x7]
        test    al, al
        jnz     L6C8A
        push    0x1
        push    0x8
        call    FUN_00704820
L6C8A:
        mov     al, bl
        pop     ebx
        pop     ecx
        ret
    }
}
