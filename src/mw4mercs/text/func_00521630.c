/*
 * FUN_00521630 (238 B) — Pilot stat extraction.
 *
 * Reads pilot stats (accuracy, kills, damage, etc.) from a pilot data
 * structure and clamps each value to [0, 100].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00617920(void *this, int arg);
extern int __fastcall FUN_005dee50(void *this);
extern int __fastcall FUN_005dee60(void *this);
extern int __fastcall FUN_005dee70(void *this);
extern int __fastcall FUN_005dee80(void *this);

__declspec(naked) void FUN_00521630(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     ecx, dword ptr [esp + 4]
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        push    esi
        mov     esi, dword ptr [ecx + 8]
        mov     ecx, dword ptr [ecx + 4]
        xor     eax, edx
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0x44]
        push    edi
        push    edx
        xor     ecx, 0x85739531
        call    FUN_00617920
        mov     edi, dword ptr [eax + 0x18]
        xor     ecx, ecx
        test    edi, edi
        mov     edx, esi
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + 4], ecx
        mov     dword ptr [edx + 8], ecx
        mov     dword ptr [edx + 0xc], ecx
        jz      done
        mov     ecx, edi
        call    FUN_005dee50
        test    eax, eax
        mov     dword ptr [esi], eax
        jge     check_max1
        mov     dword ptr [esi], 0
        jmp     check_done1
check_max1:
        cmp     eax, 100
        jle     check_done1
        mov     dword ptr [esi], 100
check_done1:
        mov     ecx, edi
        call    FUN_005dee60
        test    eax, eax
        mov     dword ptr [esi + 4], eax
        jge     check_max2
        mov     dword ptr [esi + 4], 0
        jmp     check_done2
check_max2:
        cmp     eax, 100
        jle     check_done2
        mov     dword ptr [esi + 4], 100
check_done2:
        mov     ecx, edi
        call    FUN_005dee70
        mov     ecx, 10
        sub     ecx, eax
        lea     eax, [ecx + ecx*4]
        shl     eax, 1
        mov     dword ptr [esi + 8], eax
        jns     check_max3
        mov     dword ptr [esi + 8], 0
        jmp     check_done3
check_max3:
        cmp     eax, 100
        jle     check_done3
        mov     dword ptr [esi + 8], 100
check_done3:
        mov     ecx, edi
        call    FUN_005dee80
        cdq
        sub     eax, edx
        sar     eax, 1
        mov     dword ptr [esi + 0xc], eax
        jns     check_max4
        pop     edi
        mov     dword ptr [esi + 0xc], 0
        mov     eax, 1
        pop     esi
        ret     8
check_max4:
        cmp     eax, 100
        jle     done
        mov     dword ptr [esi + 0xc], 100
done:
        pop     edi
        mov     eax, 1
        pop     esi
        ret     8
    }


}
