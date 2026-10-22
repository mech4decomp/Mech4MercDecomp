/*
 * FUN_0056E9F0 (144 B) — __cdecl RET (no args). Byte-stream parser:
 * reads signed bytes from g_00805918 into g_00805908, calls
 * FUN_0064DB40, pops a value from a stack (g_0080592c), and compares
 * against g_00805928, storing a bool into [esi].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00805918;
extern int g_00805908;
extern int g_0080592c;
extern int g_00805928;
extern int g_0080d9b0;

extern void __cdecl FUN_0064DB40(void);
extern void __cdecl FUN_00563060(void);

__declspec(naked) void FUN_0056E9F0(void)
{
    __asm {
        mov     eax, dword ptr [g_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    ebx
        push    esi
        inc     eax
        push    edi
        mov     dword ptr [g_00805908], ecx
        mov     dword ptr [g_00805918], eax
        call    FUN_0064DB40
        mov     eax, dword ptr [g_0080592c]
        mov     edi, dword ptr [eax]
        sub     eax, 4
        mov     dword ptr [g_0080592c], eax
        mov     eax, dword ptr [g_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_00805908], edx
        mov     dword ptr [g_00805918], eax
        call    FUN_0064DB40
        mov     eax, dword ptr [g_00805928]
        mov     esi, dword ptr [g_0080592c]
        mov     ebx, dword ptr [esi]
        add     eax, 0xa000
        cmp     esi, eax
        jb      L56ea56
        push    0
        call    FUN_00563060
        add     esp, 4
    L56ea56:
        mov     eax, dword ptr [g_00805918]
        movsx   edx, byte ptr [eax]
        xor     ecx, ecx
        cmp     edi, ebx
        sete    cl
        pop     edi
        inc     eax
        mov     dword ptr [g_00805918], eax
        mov     eax, dword ptr [g_0080d9b0]
        mov     dword ptr [g_00805908], edx
        mov     dword ptr [esi], ecx
        pop     esi
        pop     ebx
        ret
        nop
        nop
        nop
        nop
    }
}
