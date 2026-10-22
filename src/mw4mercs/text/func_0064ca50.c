/*
 * FUN_0064ca50 (144 B) — dispatcher: switch on this->[0x18] via a
 *   jump table (0x64cae4) + byte index table (0x64caec); default path
 *   builds a string and calls into a state machine (0x0064cb00).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008058ac;
extern char g_64caec[];
extern int g_64cae4[];

extern void __cdecl FUN_00649ec0(void *);
extern void __cdecl FUN_00562f40(int);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0061e670(void *, int);
extern int __cdecl FUN_006fab90(const char *);
extern void *__cdecl FUN_0064cb00(void *);

__declspec(naked) void FUN_0064ca50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [esi + 0x3c]
        push    edi
        mov     edi, dword ptr [esi + 0x18]
        push    esi
        call    FUN_00649ec0
        add     esp, 0x4
        cmp     edi, 0x8
        ja      Lca7c
        xor     eax, eax
        mov     al, byte ptr [g_64caec + edi]
        jmp     dword ptr [g_64cae4 + eax*4]
    Lca7c:
        push    0x1c
        mov     ebx, 0x80da38
        call    FUN_00562f40
        add     esp, 0x4
        call    FUN_00649150
        cmp     dword ptr [g_008058ac], 0x6
        jnz     Lcab2
        push    0xf
        call    FUN_00562f40
        push    0x0
        push    esi
        call    FUN_0061e670
        add     esp, 0xc
    Lcaab:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret
    Lcab2:
        mov     eax, dword ptr [g_008058ac]
        cmp     eax, 0xb
        jz      Lcad5
        cmp     eax, 0x12
        jnz     Lcaab
        push    0x792cdc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      Lcab2
        int     3
        jmp     Lcab2
    Lcad5:
        push    ebx
        call    FUN_0064cb00
        add     esp, 0x4
        mov     ebx, eax
        jmp     Lcab2
    }
}
