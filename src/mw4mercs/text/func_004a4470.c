/*
 * FUN_004a4470 (78 B) — MLR subsystem. Iterates over a list of objects
 * (stride = *(obj+0x10)+0x270), calling a virtual method on each whose
 * float field is below a global threshold.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00494910(void);
extern float g_0076d064;

__declspec(naked) void FUN_004a4470(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00494910
        mov     eax, dword ptr [esi + 0xa0]
        test    eax, eax
        jz      done
        jle     done
        mov     ecx, dword ptr [esi + 0x10]
        mov     esi, dword ptr [esi + 0xa8]
        push    ebx
        mov     ebx, dword ptr [ecx + 0x270]
        push    edi
        add     esi, 0x70
        mov     edi, eax
L_loop:
        fld     dword ptr [esi - 0x54]
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF          /* __emit: fnstsw ax no-WAIT form (MSVC6 adds 9B WAIT) */
        __emit 0xE0
        __emit 0xF6          /* __emit: test ah,imm8 rejected by MSVC6 */
        __emit 0xC4
        __emit 0x01
        jz      skip
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      skip
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x8]
skip:
        add     esi, ebx
        dec     edi
        jnz     L_loop
        pop     edi
        pop     ebx
done:
        pop     esi
        ret
    }
}
