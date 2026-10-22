/*
 * FUN_005544e0 (303 B) — __thiscall, RET 0x4.
 *
 * Copies fields from 0x518..0x52c to 0x56c..0x580 depending on
 * conditions. Calls FUN_00557f60 with different args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00557f60(int, int);

__declspec(naked) void FUN_005544e0(void)
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

        mov     eax, dword ptr [esi + 0x564]
        test    eax, eax
        jz      check_sentinel

        push    0x00
        push    0x00
        mov     ecx, esi
        call    FUN_00557f60

        mov     eax, dword ptr [esi + 0x518]
        mov     ecx, dword ptr [esi + 0x51c]
        mov     edx, dword ptr [esi + 0x520]
        mov     dword ptr [esi + 0x56c], eax
        mov     dword ptr [esi + 0x570], ecx
        mov     eax, dword ptr [esi + 0x528]
        mov     dword ptr [esi + 0x57c], eax
        mov     ecx, dword ptr [esi + 0x524]
        mov     dword ptr [esi + 0x574], edx
        mov     edx, dword ptr [esi + 0x52c]
        mov     dword ptr [esi + 0x578], ecx
        mov     dword ptr [esi + 0x568], 0x00
        mov     dword ptr [esi + 0x580], edx
        pop     esi
        ret     0x04

check_sentinel:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x0c]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x50]
        mov     ecx, dword ptr [eax + 0x5c]
        test    ecx, ecx
        jz      done

        push    0x00
        push    0x01
        mov     ecx, esi
        call    FUN_00557f60

        mov     ecx, dword ptr [esi + 0x518]
        mov     edx, dword ptr [esi + 0x51c]
        mov     eax, dword ptr [esi + 0x520]
        mov     dword ptr [esi + 0x56c], ecx
        mov     dword ptr [esi + 0x570], edx
        mov     ecx, dword ptr [esi + 0x528]
        mov     dword ptr [esi + 0x57c], ecx
        mov     edx, dword ptr [esi + 0x524]
        mov     dword ptr [esi + 0x574], eax
        mov     eax, dword ptr [esi + 0x52c]
        mov     dword ptr [esi + 0x578], edx
        mov     dword ptr [esi + 0x568], 0x01
        mov     dword ptr [esi + 0x580], eax

done:
        pop     esi
        ret     0x04
    }


}
