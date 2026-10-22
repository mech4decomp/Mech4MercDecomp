/*
 * FUN_005fcb80 (192 B) — __thiscall. Recursively walks a linked list
 * (head at +0xbc), building a temp object and calling a virtual method
 * (slot 5) on each node. Early-out if the 16-bit key at +0x284 matches
 * the sentinel at 0x007db0ac/ae.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern int g_007f26a4;

extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005fcb80(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_005fcb80(void)
{
    __asm {
        sub     esp, 0x44
        lea     eax, [ecx+0x284]
        push    ebx
        mov     ebx, dword ptr [ecx+0xbc]
        mov     cx, word ptr [eax]
        cmp     cx, word ptr [g_007db0ac]
        jnz     L1
        mov     dx, word ptr [eax+0x2]
        cmp     dx, word ptr [g_007db0ae]
        jz      L7
L1:
        push    0x1
        push    eax
        lea     ecx, [esp+0xc]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp+0x18]
        mov     ecx, dword ptr [esp+0x1c]
        add     eax, 0x2
        cmp     eax, ecx
        mov     dword ptr [esp+0x18], eax
        jbe     L2
        mov     dword ptr [esp+0x1c], eax
L2:
        push    esi
        push    edi
        jmp     L3
L4:
        mov     eax, dword ptr [esp+0x20]
L3:
        test    ebx, ebx
        jz      L6
        mov     esi, dword ptr [ebx]
        test    esi, esi
        mov     ebx, dword ptr [ebx+0x4]
        jz      L6
        mov     ecx, dword ptr [esp+0x1c]
        sub     ecx, eax
        add     ecx, dword ptr [esp+0x28]
        jz      L6
        mov     eax, dword ptr [g_007f26a4]
        mov     ecx, dword ptr [esi+0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L4
        mov     edi, dword ptr [esp+0x20]
        mov     ecx, esi
        call    FUN_005fcb80
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx+0x14]
        mov     eax, dword ptr [esp+0x20]
        mov     edx, dword ptr [edi]
        mov     ecx, dword ptr [esp+0x24]
        add     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esp+0x20], eax
        jbe     L3
        mov     dword ptr [esp+0x24], eax
        jmp     L3
L6:
        lea     ecx, [esp+0xc]
        call    FUN_004d21c0
        pop     edi
        pop     esi
L7:
        pop     ebx
        add     esp, 0x44
        ret
    }
}
