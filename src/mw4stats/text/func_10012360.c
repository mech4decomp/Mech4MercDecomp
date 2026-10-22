/*
 * FUN_10012360 (225 B, __fastcall, ECX = this) - Constructor with SEH frame.
 * Initializes the object's fields, sets the vtable pointer to 0x10021580,
 * and returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001b880(void);
extern void __cdecl FUN_1001b8d0(void);
extern void __cdecl FUN_10011f30(void);

__declspec(naked) void * __cdecl FUN_10012360(void)
{
    __asm {
        push    -0x1
        push    0x1001fd7a
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    ebx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x8], esi
        call    FUN_1001b880
        xor     ebx, ebx
        mov     byte ptr [esi + 0x49], bl
        mov     dword ptr [esi + 0x4c], ebx
        mov     dword ptr [esi + 0x50], ebx
        mov     dword ptr [esi + 0x54], ebx
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esi + 0x5c], ebx
        mov     dword ptr [esi + 0x58], ebx
        push    ebx
        lea     ecx, [esi + 0x6c]
        mov     byte ptr [esp + 0x30], 0x1
        call    FUN_10011f30
        mov     eax, 0x400
        mov     dword ptr [esi + 0xd0], ebx
        mov     dword ptr [esi + 0xd4], ebx
        mov     dword ptr [esi + 0xd8], ebx
        mov     dword ptr [esi + 0xdc], ebx
        mov     dword ptr [esi + 0xe0], ebx
        mov     dword ptr [esi + 0xe4], eax
        mov     dword ptr [esi + 0x168], ebx
        mov     dword ptr [esi + 0x16c], ebx
        mov     dword ptr [esi + 0x170], ebx
        mov     dword ptr [esi + 0x174], ebx
        mov     dword ptr [esi + 0x178], ebx
        mov     dword ptr [esi + 0x17c], eax
        lea     ecx, [esp + 0xc]
        mov     byte ptr [esp + 0x2c], 0x4
        mov     dword ptr [esi], 0x10021580
        call    FUN_1001b880
        lea     ecx, [esp + 0xc]
        call    FUN_1001b8d0
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esi + 0x68], ebx
        mov     dword ptr [esi + 0x1c], 0x1
        mov     byte ptr [esi + 0x60], bl
        mov     dword ptr [esi + 0x98], ebx
        mov     dword ptr [esi + 0x9c], ebx
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret
    }
}
