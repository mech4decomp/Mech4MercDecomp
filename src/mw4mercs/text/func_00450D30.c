/*
 * FUN_00450D30 (128 B) — __thiscall member function. If [ebx+0xc] and
 * [ebx+0x68] are non-null, (re)allocates the buffer at [esi+0x20] to hold
 * [ebx+0x18] dwords (via FUN_004084D0 / FUN_004084E0), fills it with
 * 0xffffffff, and records the buffer/count into [ebx+0x64]/[ebx+0x68].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084D0(unsigned int size);
extern void __cdecl FUN_004084E0(void *ptr);

__declspec(naked) void FUN_00450D30(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        push    esi
        mov     esi, dword ptr [ebx + 0xc]
        test    esi, esi
        je      L_450da8
        mov     eax, dword ptr [ebx + 0x68]
        test    eax, eax
        je      L_450da8
        mov     eax, dword ptr [esi + 0x24]
        push    edi
        mov     edi, dword ptr [ebx + 0x18]
        cmp     edi, eax
        je      L_450d8c
        test    edi, edi
        jbe     L_450d79
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        je      L_450d61
        push    eax
        call    FUN_004084E0
        add     esp, 4
L_450d61:
        lea     eax, [edi*4]
        push    eax
        mov     dword ptr [esi + 0x24], edi
        call    FUN_004084D0
        add     esp, 4
        mov     dword ptr [esi + 0x20], eax
        jmp     L_450d8c
L_450d79:
        mov     ecx, dword ptr [esi + 0x20]
        push    ecx
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0x20], 0
L_450d8c:
        mov     ecx, dword ptr [esi + 0x24]
        test    ecx, ecx
        jbe     L_450d9b
        mov     edi, dword ptr [esi + 0x20]
        or      eax, 0xffffffff
        rep stosd
L_450d9b:
        mov     edx, dword ptr [esi + 0x20]
        mov     eax, dword ptr [esi + 0x24]
        mov     dword ptr [ebx + 0x64], edx
        mov     dword ptr [ebx + 0x68], eax
        pop     edi
L_450da8:
        pop     esi
        pop     ebx
        ret
    }
}
