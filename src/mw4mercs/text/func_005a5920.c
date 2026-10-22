/*
 * FUN_005a5920 (247 B) — Method with conditional rendering logic.
 *
 * __thiscall (ECX = this), 2 stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f6900(int param1, int param2);
extern void __cdecl FUN_006769c0(void *this);
extern int __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcd0(int val);
extern int __cdecl FUN_005fa300(int a, void *b, int c);

__declspec(naked) void FUN_005a5920(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_0080da94;
__asm {
push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        cmp     ecx, 0x3
        push    edi
        jz      param_ok
        mov     ecx, 0x3
param_ok:
        fld     dword ptr [esi + 0x170]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      check_param
        fld     dword ptr [esi + 0x16c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      check_param
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005f6900
        pop     edi
        pop     esi
        ret     0x8
check_param:
        cmp     ecx, 0x3
        jnz     done
        mov     ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        jz      use_global
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x12c]
        jmp     check_flags
use_global:
        mov ecx, dword ptr [DAT_0080da94]
        push    esi
        call    FUN_006769c0
check_flags:
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     done
        lea     edi, [esi + 0x4a8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jnz     done
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi + 0x78]
        mov     dword ptr [esi + 0x470], ecx
        lea     ecx, [esi + 0x78]
        mov     dword ptr [esi + 0x46c], 0x3
        call    dword ptr [edx + 0x4]
        push    0x1
        push    esi
        add     eax, 0x58
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x41c], 0x0
        mov     dword ptr [esi + 0x420], 0x0
        mov     dword ptr [esi + 0x424], 0x1
        call    FUN_005fa300
        test    eax, eax
        jz      done
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0xe
        call    dword ptr [eax + 0x4]
done:
        pop     edi
        pop     esi
        ret     0x8
    }


}
