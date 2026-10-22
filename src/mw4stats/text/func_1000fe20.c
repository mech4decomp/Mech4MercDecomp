/*
 * FUN_1000fe20 (235 B) - __fastcall. Constructor with SEH frame: initializes
 * a stats object (vtable + many zeroed fields + three 0x400-size counters).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_1001b880(void);
extern void FUN_1001b8d0(void);

__declspec(naked) void FUN_1000fe20(void)
{
    __asm {
        push    -1
        push    0x1001fc4d
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
        mov     eax, 0x400
        mov     dword ptr [esi + 0x84], ebx
        mov     dword ptr [esi + 0x88], ebx
        mov     dword ptr [esi + 0x8c], ebx
        mov     dword ptr [esi + 0x90], ebx
        mov     dword ptr [esi + 0x94], ebx
        mov     dword ptr [esi + 0x98], eax
        mov     dword ptr [esi + 0x14c], ebx
        mov     dword ptr [esi + 0x150], ebx
        mov     dword ptr [esi + 0x154], ebx
        mov     dword ptr [esi + 0x158], ebx
        mov     dword ptr [esi + 0x15c], ebx
        mov     dword ptr [esi + 0x160], eax
        mov     dword ptr [esi + 0x1e4], ebx
        mov     dword ptr [esi + 0x1e8], ebx
        mov     dword ptr [esi + 0x1ec], ebx
        mov     dword ptr [esi + 0x1f0], ebx
        mov     dword ptr [esi + 0x1f4], ebx
        mov     dword ptr [esi + 0x1f8], eax
        lea     ecx, [esp + 0xc]
        mov     byte ptr [esp + 0x2c], 0x4
        mov     dword ptr [esi], 0x1002153c
        call    FUN_1001b880
        lea     ecx, [esp + 0xc]
        call    FUN_1001b8d0
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esi + 0x78], ebx
        mov     dword ptr [esi + 0x74], ebx
        mov     dword ptr [esi + 0x1c], 0x1
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret
    }
}
