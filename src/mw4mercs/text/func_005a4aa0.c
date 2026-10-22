/*
 * FUN_005a4aa0 (243 B) — __thiscall method on some game object.
 *
 * Takes this in ECX, two stack params (int param1 at ESP+8, void* param2 at ESP+0x10).
 * Checks float fields at +0x16c/+0x170 against a constant at 0x0076c5b0.
 * If both are equal to the constant, calls FUN_005f6900 and returns.
 * Otherwise if param1==3, does some vtable dispatch and state setup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f6900(int param1, void *param2);
extern void __stdcall FUN_006769c0(void *this);
extern int __stdcall FUN_0041fd80(void *this);
extern int __stdcall FUN_005fa300(void *a, void *b, int c);
extern void __stdcall FUN_0041fcd0(int val);

void __declspec(naked) __stdcall FUN_005a4aa0(int param1, void *param2)
{
    

extern int DAT_0076c5b0;
extern int DAT_0080da94;
__asm {
push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        cmp     ecx, 0x3
        push    edi
        jz      param_check_done
        mov     ecx, 0x3
param_check_done:
        fld     dword ptr [esi + 0x170]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      not_both_zero
        fld     dword ptr [esi + 0x16c]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      not_both_zero
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005f6900
        pop     edi
        pop     esi
        ret     0x8
not_both_zero:
        cmp     ecx, 0x3
        jne     epilogue
        mov     ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        jz      call_alt
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x12c]
        jmp     after_vcall
call_alt:
        mov ecx, dword ptr [DAT_0080da94]
        push    esi
        call    FUN_006769c0
after_vcall:
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     epilogue
        lea     edi, [esi + 0x4a8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jnz     epilogue
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
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0xe
        call    dword ptr [eax + 0x4]
epilogue:
        pop     edi
        pop     esi
        ret     0x8
    }


}
