/*
 * FUN_007335F0 (77 B) — Iterates a linked list (head at 0x00857f38),
 * calling FUN_00734110 on each node's +0xC member and freeing it via
 * FUN_004084e0, then calls FUN_006f4850(g_008aa284, 1) and clears
 * g_008aa284. Guarded by g_008aa288 flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_008aa288;
extern unsigned int  g_00857f38;
extern unsigned int  g_008aa284;
extern void __cdecl  FUN_00734110(void);
extern void __cdecl  FUN_004084e0(void *p);
extern void __stdcall FUN_006f4850(unsigned int a, int b);

__declspec(naked) void FUN_007335f0(void)
{
    __asm {
        mov     al, byte ptr [g_008aa288]
        test    al, al
        push    esi
        push    edi
        jnz     label_73623
        mov     esi, dword ptr [g_00857f38]
    label_73601:
        test    esi, esi
        mov     eax, esi
        jz      label_73623
        mov     edi, dword ptr [eax + 0xc]
        test    edi, edi
        mov     esi, dword ptr [esi + 0x4]
        jz      label_73623
        mov     ecx, edi
        call    FUN_00734110
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
        jmp     label_73601
    label_73623:
        mov     eax, dword ptr [g_008aa284]
        push    0x1
        push    eax
        call    FUN_006f4850
        pop     edi
        mov     dword ptr [g_008aa284], 0
        pop     esi
        ret
    }
}
