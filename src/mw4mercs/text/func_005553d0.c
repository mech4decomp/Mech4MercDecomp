/*
 * FUN_005553d0 (418 B) — __thiscall, RET 0x4.
 *
 * Two paths based on this+0x8dc:
 * - If == 2: advance linked list, call FUN_00626950(2, val).
 * - Else: iterate through 6 states, call FUN_00417a40 on different
 *   offsets, then call FUN_00629290/FUN_0063d510.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int FUN_00417a40(void);
extern void FUN_00626950(int, int);
extern int FUN_00629290(int);
extern void FUN_0063d510(int);

__declspec(naked) void FUN_005553d0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x384]
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        test    cl, 0x01
        jnz     done

        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jnz     done

        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jnz     done

        mov     edx, dword ptr [esp + 0x08]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle     done

        cmp     dword ptr [esi + 0x8dc], 0x02
        jnz     else_path

        /* case == 2 */
        mov     esi, dword ptr [esi + 0x938]
        mov     eax, dword ptr [esi + 0x08]
        test    eax, eax
        jz      skip_advance
        mov     eax, dword ptr [eax + 0x04]
        mov     dword ptr [esi + 0x08], eax

skip_advance:
        mov     eax, dword ptr [esi + 0x08]
        test    eax, eax
        jz      reload_from_4
        cmp     dword ptr [eax], 0x00
        jnz     have_next_ptr
reload_from_4:
        mov     ecx, dword ptr [esi + 0x04]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esi + 0x08], edx

have_next_ptr:
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x40]
        add     ecx, 0x40
        xor     edx, 0x85739531
        jz      done

        mov     esi, dword ptr [esi + 0x08]
        test    esi, esi
        jz      xor_eax
        mov     eax, dword ptr [esi]
        jmp     do_call_26950
xor_eax:
        xor     eax, eax
do_call_26950:
        mov     ecx, dword ptr [ecx]
        push    eax
        push    0x02
        xor     ecx, 0x85739531
        call    FUN_00626950
        pop     esi
        ret     0x04

else_path:
        push    ebx
        push    edi
        xor     bl, bl
        xor     edi, edi

loop_top:
        cmp     edi, 0x06
        jge     after_loop

        mov     ecx, dword ptr [esi + 0x8e0]
        inc     ecx
        mov     eax, ecx
        cmp     eax, 0x06
        mov     dword ptr [esi + 0x8e0], ecx
        jle     no_wrap
        mov     dword ptr [esi + 0x8e0], 0x01

no_wrap:
        mov     eax, dword ptr [esi + 0x8e0]
        dec     eax
        cmp     eax, 0x05
        ja      next_iter

        /* jump table at 0x555574 */
        jmp     dword ptr [eax*4 + 0x555574]

        /* case 0: offset 0x904 */
        lea     ecx, [esi + 0x904]
        call    FUN_00417a40
        test    eax, eax
        jbe     next_iter
        jmp     set_bl

        /* case 1: offset 0x90c */
        lea     ecx, [esi + 0x90c]
        call    FUN_00417a40
        test    eax, eax
        jbe     next_iter
        jmp     set_bl

        /* case 2: offset 0x914 */
        lea     ecx, [esi + 0x914]
        call    FUN_00417a40
        test    eax, eax
        jbe     next_iter
        jmp     set_bl

        /* case 3: offset 0x91c */
        lea     ecx, [esi + 0x91c]
        call    FUN_00417a40
        test    eax, eax
        jbe     next_iter
        jmp     set_bl

        /* case 4: offset 0x924 */
        lea     ecx, [esi + 0x924]
        call    FUN_00417a40
        test    eax, eax
        jbe     next_iter
        jmp     set_bl

        /* case 5: offset 0x92c */
        lea     ecx, [esi + 0x92c]
        call    FUN_00417a40
        test    eax, eax
        jbe     next_iter

set_bl:
        mov     bl, 0x01

next_iter:
        inc     edi
        test    bl, bl
        jz      loop_top

after_loop:
        mov eax, dword ptr [DAT_007dab44]
        mov edi, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, edi
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        pop     edi
        pop     ebx
        jz      done

        mov     ecx, dword ptr [eax + 0x40]
        push    0x0a
        xor     ecx, 0x85739531
        call    FUN_00629290
        mov     edx, dword ptr [esi + 0x8e0]
        push    edx
        mov     ecx, eax
        call    FUN_0063d510

done:
        pop     esi
        ret     0x04
    }


}
