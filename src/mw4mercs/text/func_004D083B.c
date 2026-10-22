/*
 * FUN_004D083B (120 B) — __thiscall (this in ECX), RET 0xC (3 params).
 * Allocates an object via FUN_004084C0, initializes it with a vtable
 * (0x76cd64) and a linked-list node, then calls FUN_004D0600 and
 * FUN_004CFC90, freeing the temp via FUN_004084E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8810;

extern void __cdecl FUN_004CFBD0(void);
extern void __cdecl FUN_004084C0(void);
extern void __cdecl FUN_004D0600(void);
extern void __cdecl FUN_004CFC90(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_004D083B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_004CFBD0
        mov     eax, dword ptr [g_007b8810]
        push    eax
        push    0xc
        call    FUN_004084C0
        add     esp, 8
        test    eax, eax
        je      L4d0878
        lea     ecx, [esi + 0x44]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax], 0x76cd64
        mov     esi, eax
        jmp     L4d087a
    L4d0878:
        xor     esi, esi
    L4d087a:
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        je      L4d0885
        mov     eax, dword ptr [eax]
        jmp     L4d0887
    L4d0885:
        xor     eax, eax
    L4d0887:
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        mov     ecx, edi
        call    FUN_004D0600
        mov     ecx, edi
        mov     ebx, eax
        call    FUN_004CFC90
        push    esi
        call    FUN_004084E0
        add     esp, 4
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0xc
    }
}
