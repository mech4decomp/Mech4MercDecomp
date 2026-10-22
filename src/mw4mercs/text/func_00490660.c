/*
 * FUN_00490660 (60 B) — __fastcall (ECX = param_1), returns EAX.
 * Constructor-like initializer for a 6-dword object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00416280(void);
extern void __fastcall FUN_00412740(void);

extern int DAT_007b87ec;

__declspec(naked) void * __fastcall FUN_00490660(void *param_1)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        push    0x1
        push    0x0
        lea     edi, [esi + 0x4]
        push    0x1003
        mov     ecx, edi
        call    FUN_00416280
        mov     eax, dword ptr [DAT_007b87ec]   ; mov eax, [0x007b87ec]
        mov     dword ptr [edi], 0x76ffe0
        lea     ecx, [esi + 0x18]
        mov     dword ptr [ecx], 0x0
        push    eax
        mov     dword ptr [esi], 0x76ffdc
        call    FUN_00412740
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    }
}
