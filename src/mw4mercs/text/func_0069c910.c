/*
 * FUN_0069c910 (144 B) — __fastcall constructor (ECX = this), plain RET.
 *
 * Calls FUN_00561430(DAT_007ddde0), initializes a linked list at
 * this+0x50 via FUN_0069cb10, allocates a 0x114-byte node, and
 * frees any existing nodes via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007ddde0;

extern void __cdecl FUN_00561430(unsigned int);
extern void __cdecl FUN_0069cb10(void);
extern void __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __stdcall FUN_0069c910(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [g_007ddde0]
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        call    FUN_00561430
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x13]
        lea     esi, [edi + 0x50]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], 0
        call    FUN_0069cb10
        push    0x114
        call    FUN_004084d0
        mov     dword ptr [esi], eax
        mov     dword ptr [eax], eax
        mov     dword ptr [edi], 0x7999c8
        mov     ebx, dword ptr [esi]
        mov     dword ptr [eax + 0x4], eax
        mov     esi, dword ptr [ebx]
        add     esp, 4
        cmp     esi, ebx
        jz      L_976
    L_961:
        mov     eax, esi
        test    eax, eax
        mov     esi, dword ptr [esi]
        jz      L_972
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_972:
        cmp     esi, ebx
        jnz     L_961
    L_976:
        mov     dword ptr [edi + 0x14], 0
        mov     dword ptr [edi + 0x18], 0
        mov     dword ptr [edi + 0x1c], 0x3f666666
        mov     dword ptr [edi + 0x34], 0xfa007d00
        mov     eax, edi
        pop     edi
        mov     dword ptr [ebx], ebx
        pop     esi
        mov     dword ptr [ebx + 0x4], ebx
        pop     ebx
        add     esp, 8
        ret
    }
}
