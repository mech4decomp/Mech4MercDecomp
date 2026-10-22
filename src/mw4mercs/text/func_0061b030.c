/*
 * FUN_0061b030 (116 B) — Constructor allocating two sub-objects.
 *
 * __fastcall (ECX = this), RET 0. Calls FUN_0061af60, allocates two
 * 0x28-byte objects via FUN_004084d0/FUN_0041ee70, stores them at
 * this+0x30 / this+0x34, and invokes vtable[5] on each.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0061af60(void);
extern void * __cdecl FUN_004084d0(unsigned int size);
extern void * __cdecl FUN_0041ee70(int param);

__declspec(naked) void __fastcall FUN_0061b030(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0061af60
        push    0x28
        mov     dword ptr [esi + 0x1c], 2
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_zero1
        push    0
        mov     ecx, eax
        call    FUN_0041ee70
        jmp     l_cont1
    l_zero1:
        xor     eax, eax
    l_cont1:
        mov     edx, dword ptr [eax]
        push    0xf4240
        mov     ecx, eax
        mov     dword ptr [esi + 0x30], eax
        call    dword ptr [edx + 0x14]
        push    0x28
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_zero2
        push    0
        mov     ecx, eax
        call    FUN_0041ee70
        mov     edx, dword ptr [eax]
        push    0xfa00
        mov     ecx, eax
        mov     dword ptr [esi + 0x34], eax
        call    dword ptr [edx + 0x14]
        pop     esi
        ret
    l_zero2:
        xor     eax, eax
        mov     edx, dword ptr [eax]
        push    0xfa00
        mov     ecx, eax
        mov     dword ptr [esi + 0x34], eax
        call    dword ptr [edx + 0x14]
        pop     esi
        ret
    }
}
