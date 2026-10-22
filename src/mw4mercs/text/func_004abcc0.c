/*
 * FUN_004abcc0 (255 B) — MLR subsystem method (__thiscall, RET 0x4).
 * Validates curve life-span / starting population / max particle count
 * values via FUN_004ad160 + FPU compare, emits warning strings through
 * FUN_006fabf0 (with INT3 assert on failure), then calls FUN_004938b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern void __cdecl FUN_004ad160(int, int);
extern void __cdecl FUN_004aeb30(int);
extern void __cdecl FUN_004adfb0(int);
extern int __cdecl FUN_006fabf0(int, int);
extern void __cdecl FUN_004938b0(int);

__declspec(naked) void FUN_004abcc0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        push    ebx
        push    esi
        mov     esi, ecx
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 4]
        push    ecx
        lea     ecx, [esi + 0xd4]
        call    FUN_004ad160
        fld     dword ptr [ebp - 4]
        fcomp   dword ptr [g_0076c5b0]
        mov     ebx, dword ptr [ebp + 8]
        __emit 0xDF          /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6          /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      check2
        test    bl, bl
        jz      fail
        push    0x3f800000
        lea     ecx, [esi + 0xd8]
        call    FUN_004aeb30
        push    0x3f800000
        lea     ecx, [esi + 0xe4]
        mov     byte ptr [esi + 0xf8], 0
        call    FUN_004adfb0
        mov     edx, dword ptr [esi + 4]
        push    edx
        push    0x7b3134
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check2
        int     3
check2:
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 4]
        push    ecx
        lea     ecx, [esi + 0x60]
        call    FUN_004ad160
        fld     dword ptr [ebp - 4]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF          /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6          /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      check3
        test    bl, bl
        jz      fail
        mov     dword ptr [esi + 0x64], 0
        mov     edx, dword ptr [esi + 4]
        push    edx
        push    0x7b3184
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check3
        int     3
check3:
        mov     ecx, dword ptr [esi + 0x268]
        mov     eax, 1
        cmp     ecx, eax
        jge     done
        test    bl, bl
        jz      fail
        mov     dword ptr [esi + 0x268], eax
        mov     eax, dword ptr [esi + 4]
        push    eax
        push    0x7b31dc
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      done
        int     3
done:
        push    ebx
        mov     ecx, esi
        call    FUN_004938b0
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
fail:
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
