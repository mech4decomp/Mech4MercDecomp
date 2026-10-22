/*
 * FUN_100015c0 (224 B) — __fastcall, RET.
 * Object constructor: fills a large struct (param in ECX) with two
 * overlapping sets of vtable pointers (0x10049528..0x10049408 then
 * 0x100493e0..0x100492b0), zeroes many fields, and initializes a
 * critical section at offset 0x70 via IAT 0x100491a8.
 *
 * CFLAGS: /O1
 */

extern void *g_100491a8;   /* IAT: InitializeCriticalSection */

__declspec(naked) void __fastcall FUN_100015c0(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x4], 0x10049528
        mov     dword ptr [esi + 0x8], 0x10049500
        mov     dword ptr [esi + 0xc], 0x100494b0
        mov     dword ptr [esi + 0x10], 0x10049478
        mov     dword ptr [esi + 0x14], 0x10049440
        mov     dword ptr [esi + 0x18], 0x10049424
        mov     dword ptr [esi + 0x1c], 0x1004940c
        mov     dword ptr [esi + 0x20], 0x10049408
        lea     eax, [esi + 0x70]
        push    eax
        mov     dword ptr [esi], 0x100493e0
        mov     dword ptr [esi + 0x4], 0x100493d0
        mov     dword ptr [esi + 0x8], 0x100493a8
        mov     dword ptr [esi + 0xc], 0x10049358
        mov     dword ptr [esi + 0x10], 0x10049320
        mov     dword ptr [esi + 0x14], 0x100492e8
        mov     dword ptr [esi + 0x18], 0x100492cc
        mov     dword ptr [esi + 0x1c], 0x100492b4
        mov     dword ptr [esi + 0x20], 0x100492b0
        mov     dword ptr [esi + 0x24], 0x1
        mov     byte ptr [esi + 0x28], bl
        mov     dword ptr [esi + 0x2c], ebx
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esi + 0x3c], ebx
        mov     dword ptr [esi + 0x40], ebx
        mov     dword ptr [esi + 0x44], ebx
        mov     dword ptr [esi + 0x58], ebx
        mov     dword ptr [esi + 0x5c], ebx
        mov     dword ptr [esi + 0x60], ebx
        mov     dword ptr [esi + 0x64], ebx
        mov     dword ptr [esi + 0x68], ebx
        mov     dword ptr [esi + 0x6c], ebx
        call    dword ptr [g_100491a8]
        mov     byte ptr [esi + 0x88], bl
        mov     byte ptr [esi + 0x89], bl
        mov     dword ptr [esi + 0x8c], ebx
        mov     dword ptr [esi + 0x90], ebx
        mov     dword ptr [esi + 0x94], ebx
        mov     byte ptr [esi + 0x98], bl
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
