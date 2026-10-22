/*
 * FUN_004938B0 (95 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Checks curve lifespan via FUN_004ad160; if below threshold and param_1
 * is nonzero, sets lifespan to 1.0f and warns. Returns 1 or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ad160(void *param_1, void *param_2);
extern int __cdecl FUN_006fabf0(const char *str, int param_2);

extern float _DAT_0076c5b0;

__declspec(naked) int __fastcall FUN_004938b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        push    esi
        mov     esi, ecx
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 4]
        push    ecx
        lea     ecx, [esi + 0x18]
        call    FUN_004ad160
        fld     dword ptr [ebp - 4]
        _emit 0xD8  /* fcomp dword ptr [0x0076c5b0] */
        _emit 0x1D
        _emit 0xB0
        _emit 0xC5
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 1
        jz      l_return_1
        mov     al, byte ptr [ebp + 8]
        test    al, al
        jz      l_return_0
        _emit 0xC7  /* mov dword ptr [esi + 0x1c], 0x3f800000 */
        _emit 0x46
        _emit 0x1C
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x3F
        mov     edx, dword ptr [esi + 4]
        push    edx
        push    0x7b25ec
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_return_1
        int     3
l_return_1:
        mov     al, 1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
l_return_0:
        xor     al, al
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
