/*
 * FUN_00679e70 (196 B) — GameData ActiveTime setter with validation.
 *
 * Calls FUN_00675850(param_1..param_5), then dispatches on param_2[4]:
 *   0x14 -> if *param_3==0, call vtable[1](param_1,&buf) with buf=0x41a00000;
 *           then if *(float*)(param_1+0x7c) > 0x76c5b0, _snprintf error, return 0.
 *   0x15 -> if *param_3==0, call vtable[1](param_1,&buf) with 16-bit globals, return 1.
 *   else -> return FUN_00675850 result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <stddef.h>

extern char __cdecl FUN_00675850(int param_1, int *param_2, char *param_3,
                                 char **param_4, size_t param_5);
extern unsigned short g_7db0ae;   /* 0x007db0ae */
extern unsigned short g_7db0ac;   /* 0x007db0ac */
extern float g_76c5b0;            /* 0x0076c5b0 */
extern void *g_76b424;            /* 0x0076b424 (IAT) */

__declspec(naked) char __cdecl FUN_00679e70(int param_1, int *param_2,
                                            char *param_3, char **param_4,
                                            size_t param_5)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        mov     bl, byte ptr [eax]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    ebp
        push    ecx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setnz   bl
        call    FUN_00675850
        mov     cl, al
        mov     eax, dword ptr [esi + 0x10]
        add     esp, 0x14
        sub     eax, 0x14
        jz      l_case14
        dec     eax
        jnz     l_done
        test    bl, bl
        jnz     l_done
        mov     ax, word ptr [g_7db0ae]
        mov     dx, word ptr [g_7db0ac]
        mov     word ptr [esp + 0x22], ax
        lea     eax, [esp + 0x20]
        push    eax
        mov     word ptr [esp + 0x24], dx
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret
    l_case14:
        test    bl, bl
        jnz     l_check
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x1c]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0x41a00000
        call    dword ptr [edx + 0x4]
        mov     cl, 1
    l_check:
        fld     dword ptr [edi + 0x7c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      l_done
        fld     dword ptr [edi + 0x7c]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ecx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x798098
        push    ebp
        push    edx
        call    dword ptr [g_76b424]
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, cl
        pop     ebx
        ret
    }
}
