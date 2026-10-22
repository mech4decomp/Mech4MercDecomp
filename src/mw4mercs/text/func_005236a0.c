/*
 * FUN_005236A0 (321 B) — Initialize player/control options (variant 2).
 *
 * __thiscall (ECX=this), returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005236a0(void)
{
    

extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0061a510(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_004d2680(void);
extern int DAT_007dd230;
extern void __cdecl FUN_0050aba0(void);
extern void __cdecl FUN_0050a5c0(void);
extern void __cdecl FUN_004d2a90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0061a160(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);
__asm {
sub     esp, 0xd8
        push    ebx
        mov     ebx, ecx
        push    edi
        mov     edi, dword ptr [ebx + 0x40ee8]
        test    edi, edi
        jz      l_skip
        push    esi
        push    0
        lea     ecx, [esp + 0x10]
        call FUN_0041ee70
        lea     eax, [esp + 0xc]
        push    eax
        push    0
        call FUN_0061a510
        mov     edx, dword ptr [esp + 0x14]
        add     esp, 8
        push    0
        lea     ecx, [esp + 0x10]
        call    dword ptr [edx + 0xc]
        mov     esi, dword ptr [ebx + 0x40ee4]
        push    0
        push    esi
        push    0x77a0a8
        lea     ecx, [esp + 0xac]
        mov     dword ptr [esp + 0x20], 0xffffffec
        call FUN_004d2110
        push    0
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0xa8]
        call FUN_004d2680
        mov ecx, dword ptr [DAT_007dd230]
        call FUN_0050aba0
        push    0
        push    esi
        push    0x77a158
        lea     ecx, [esp + 0x68]
        call FUN_004d2110
        push    0
        lea     ecx, [esp + 0x38]
        call FUN_0041ee70
        lea     ecx, [esp + 0x34]
        push    ecx
        mov ecx, dword ptr [DAT_007dd230]
        call FUN_0050a5c0
        mov     edx, dword ptr [esp + 0x34]
        push    0
        lea     ecx, [esp + 0x38]
        call    dword ptr [edx + 0xc]
        push    0
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x44], 0xffffffec
        call FUN_004d2680
        mov     ecx, esi
        call FUN_004d2a90
        test    edi, edi
        pop     esi
        jz      l_alloc
        mov     edx, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx]
    l_alloc:
        push    0x88c
        call FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_zero
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, eax
        call FUN_0061a160
        jmp     l_store
    l_zero:
        xor     eax, eax
    l_store:
        lea     ecx, [esp + 0x30]
        mov     dword ptr [ebx + 0x40ee8], eax
        call FUN_0041ef60
        lea     ecx, [esp + 0x58]
        call FUN_004d21c0
        lea     ecx, [esp + 0x9c]
        call FUN_004d21c0
        lea     ecx, [esp + 0x8]
        call FUN_0041ef60
    l_skip:
        pop     edi
        mov     eax, 1
        pop     ebx
        add     esp, 0xd8
        ret
    }


}
