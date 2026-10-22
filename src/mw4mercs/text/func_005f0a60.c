/*
 * FUN_005f0a60 (122 B) — __cdecl, 2 params. Allocates an object via virtual
 * call, initializes its fields, copies 0xc dwords from DAT_007b9460, and
 * returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int FUN_004da920(void *p);

__declspec(naked) int FUN_005f0a60(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi]
        push    edi
        push    0x6c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ebp, eax
        xor     ebx, ebx
        mov     dword ptr [ebp + 0x58], ebx
        mov     dword ptr [ebp + 0x50], ebx
        mov     dword ptr [ebp + 0x14], ebx
        mov     ax, word ptr [esp + 0x14]
        mov     word ptr [ebp + 0x54], ax
        mov     cx, word ptr [esp + 0x16]
        lea     edx, [esp + 0x14]
        push    edx
        mov     word ptr [ebp + 0x56], cx
        call    FUN_004da920
        add     esp, 4
        mov     dword ptr [ebp + 0x10], eax
        lea     edi, [ebp + 0x1c]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep     movsd
        pop     edi
        mov     eax, 0x1
        pop     esi
        mov     byte ptr [ebp + 0x18], bl
        mov     dword ptr [ebp + 0x60], ebx
        mov     dword ptr [ebp + 0x68], ebx
        mov     byte ptr [ebp + 0x64], bl
        mov     dword ptr [ebp + 0x4c], eax
        mov     dword ptr [ebp + 0x5c], 0xffffffff
        mov     word ptr [ebp + 0x1a], ax
        pop     ebp
        pop     ebx
        ret
    }
}
