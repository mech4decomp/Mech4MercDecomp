/*
 * FUN_00646d60 (141 B) — __fastcall (ECX = param_1), returns param_1 in EAX.
 *
 * Constructor: calls FUN_00561430(DAT_007ddde0), sets vtable 0x7926d8,
 * calls FUN_005614d0("hud\\hud5", ...) twice, then initializes fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7ddde0;
extern void __cdecl FUN_00561430(void *p);
extern void __cdecl FUN_005614d0(void);

__declspec(naked) void *__fastcall FUN_00646d60(void *param)
{
    __asm {
        mov     eax, dword ptr [g_7ddde0]
        push    ebx
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        push    0x43800000
        push    0x43800000
        push    0x43460000
        push    0x437f0000
        push    0x43270000
        push    0x43600000
        xor     ebx, ebx
        push    ebx
        push    0x78f198
        mov     ecx, esi
        mov     dword ptr [esi], 0x7926d8
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43200000
        push    0x437f0000
        push    0x43010000
        push    0x43600000
        push    0x1
        push    0x78f198
        mov     ecx, esi
        call    FUN_005614d0
        mov     dword ptr [esi + 0x54], ebx
        mov     dword ptr [esi + 0x58], ebx
        mov     byte ptr [esi + 0x68], bl
        mov     byte ptr [esi + 0x69], bl
        mov     dword ptr [esi + 0x50], 0xff
        mov     dword ptr [esi + 0x34], 0x9600af00
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
