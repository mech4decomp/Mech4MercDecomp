/*
 * FUN_004C3440 (78 B) — MLR camera-element destructor (thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00416130(void *this);
extern void FUN_0041fc90(void *this);
extern void FUN_004c4480(void *this);

extern int g_7daa38;

__declspec(naked) void __fastcall FUN_004c3440(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x26c]
        test    ecx, ecx
        mov     dword ptr [esi], 0x771668
        jz      l_skip_obj

        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]

    l_skip_obj:
        mov     eax, dword ptr [esi + 0x2c4]
        test    eax, eax
        jz      l_skip_tex

        mov     ecx, dword ptr [g_7daa38]
        push    eax
        call    FUN_00416130

    l_skip_tex:
        lea     ecx, [esi + 0x27c]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x274]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_004c4480
        pop     esi
        ret
    }
}
