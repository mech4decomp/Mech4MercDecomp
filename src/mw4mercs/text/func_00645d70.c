/*
 * FUN_00645d70 (135 B) — __thiscall (ECX = this), returns this in EAX.
 *
 * Constructor: calls FUN_00561430(global), sets the vtable pointer
 * (0x792694) and many float/int fields, then calls FUN_005614d0 with
 * a format string (0x792448) and several float constants. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007ddde0;
extern void __cdecl FUN_00561430(unsigned int a);
extern void __cdecl FUN_005614d0(const char *fmt, int a, int b, int c, int d, int e, int f, int g);

__declspec(naked) void *__stdcall FUN_00645d70(void)
{
    __asm {
        mov     eax, dword ptr [g_007ddde0]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        push    0x43800000
        push    0x43800000
        push    0x434f0000
        push    0x42c00000
        push    0x43480000
        xor     ecx, ecx
        push    0x42b00000
        mov     dword ptr [esi + 0x54], ecx
        mov     eax, 0x3f666666
        push    ecx
        mov     dword ptr [esi], 0x792694
        mov     dword ptr [esi + 0x58], ecx
        mov     dword ptr [esi + 0x14], 0x43a60000
        mov     dword ptr [esi + 0x18], 0x4406c000
        mov     dword ptr [esi + 0x1c], eax
        push    0x792448
        mov     ecx, esi
        mov     dword ptr [esi + 0x50], 0xff
        mov     dword ptr [esi + 0x64], 0x6d
        mov     dword ptr [esi + 0x5c], 0x64
        mov     dword ptr [esi + 0x20], 0x40e00000
        mov     dword ptr [esi + 0x24], 0x42440000
        mov     dword ptr [esi + 0x28], eax
        call    FUN_005614d0
        mov     eax, esi
        pop     esi
        ret
    }
}
