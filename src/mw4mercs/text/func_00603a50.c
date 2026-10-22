/*
 * FUN_00603a50 (191 B) — __thiscall ctor (RET 0xC, 3 params) for a
 * weapon-render/sprite object. Sets up three sub-objects at +0x40/+0x48/+0x50
 * (each given vtable 0x78b8c0), zeroes a block of fields, installs vtable
 * 0x78b8b0 at +0x00, and allocates a 0x28-byte child via FUN_004084d0,
 * constructing it through FUN_00605530.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dd220(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00605530(void);

__declspec(naked) void FUN_00603a50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004dd220
        lea     edi, [esi + 0x40]
        xor     ebx, ebx
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x78b8c0
        lea     edi, [esi + 0x48]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x78b8c0
        lea     edi, [esi + 0x50]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x78b8c0
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x58], ebx
        mov     dword ptr [esi + 0x5c], ebx
        mov     dword ptr [esi + 0x60], ebx
        mov     dword ptr [esi + 0x64], ebx
        mov     dword ptr [esi + 0x68], ebx
        mov     dword ptr [esi + 0x6c], ebx
        mov     dword ptr [esi + 0x70], ebx
        mov     dword ptr [esi + 0x74], ebx
        mov     dword ptr [esi + 0x78], ebx
        push    0x28
        mov     dword ptr [esi + 0x7c], ebx
        mov     dword ptr [esi], 0x78b8b0
        mov     byte ptr [esi + 0x1c], bl
        mov     dword ptr [esi + 0x18], edi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      loc_603ae6
        push    edi
        push    0x5f8be0
        mov     ecx, eax
        call    FUN_00605530
        jmp     loc_603ae8
loc_603ae6:
        xor     eax, eax
loc_603ae8:
        mov     dword ptr [esi + 0x3c], eax
        pop     edi
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0x34], ebx
        mov     byte ptr [esi + 0x1d], bl
        mov     byte ptr [esi + 0x1e], bl
        mov     byte ptr [esi + 0x1f], bl
        mov     byte ptr [esi + 0x20], bl
        mov     dword ptr [esi + 0x24], ebx
        mov     dword ptr [esi + 0x28], 0xffffffff
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
