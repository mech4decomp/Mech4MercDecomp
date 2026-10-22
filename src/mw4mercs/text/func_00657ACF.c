/*
 * FUN_00657ACF (174 B) — writes several values through a virtual method and
 * copies a block of data in a loop.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0041e130(void);
extern void __cdecl FUN_0041dec0(void);

__declspec(naked) void FUN_00657ACF(void)
{
    __asm {
        nop
        sub     esp, 0x34
        mov     eax, dword ptr [esp+0x38]
        push    ebx
        push    esi
        push    edi
        push    1
        mov     ebx, ecx
        push    eax
        lea     ecx, [esp+0x18]
        call    FUN_0041de80
        mov     esi, dword ptr [ebx]
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, esi
        neg     ecx
        push    4
        lea     edx, [esp+0x48]
        mov     dword ptr [esp+0x48], ecx
        push    edx
        lea     ecx, [esp+0x18]
        call    dword ptr [eax+0x24]
        mov     edi, dword ptr [ebx+4]
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, edi
        neg     ecx
        push    4
        lea     edx, [esp+0x48]
        mov     dword ptr [esp+0x48], ecx
        push    edx
        lea     ecx, [esp+0x18]
        call    dword ptr [eax+0x24]
        mov     eax, 0xcccccccd
        mul     edi
        mov     edi, edx
        mov     eax, 0xcccccccd
        mul     esi
        mov     eax, dword ptr [esp+0x10]
        mov     ebx, dword ptr [ebx+8]
        mov     esi, edx
        shr     esi, 3
        shl     esi, 1
        shr     edi, 3
        mov     ecx, esi
        imul    ecx, edi
        push    4
        lea     edx, [esp+0x10]
        mov     dword ptr [esp+0x10], ecx
        push    edx
        lea     ecx, [esp+0x18]
        call    dword ptr [eax+0x24]
        test    edi, edi
        jle     L_7b6d
    L_7b5d:
        push    esi
        push    ebx
        lea     ecx, [esp+0x18]
        call    FUN_0041e130
        add     ebx, esi
        dec     edi
        jne     L_7b5d
    L_7b6d:
        lea     ecx, [esp+0x10]
        call    FUN_0041dec0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x34
        ret     4
    }
}
