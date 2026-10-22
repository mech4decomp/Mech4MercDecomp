/*
 * FUN_005C6D00 (136 B) — __thiscall (ECX=this), RET 8 (two stack params).
 *
 * Enters a critical section (FUN_006f4950), scans a list of entries
 * (param_1[1] count, stride 0x38) for one whose id matches a singleton
 * (FUN_0041fd80); on match stores a float (FUN_00707e70(0)) at this+0x574.
 * Then calls FUN_005cf880(param_1, param_2) and leaves the critical section.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4950(int handle);
extern void __stdcall FUN_006f49a0(void);
extern void *__fastcall FUN_0041fd80(void *this);
extern double __stdcall FUN_00707e70(int param);
extern char __stdcall FUN_005cf880(void *param1, void *param2);

__declspec(naked) char __fastcall FUN_005c6d00(void)
{
    

extern int DAT_007f2460;
__asm {
push    ecx
        mov eax, dword ptr [DAT_007f2460]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        push    eax
        mov     dword ptr [esp + 0x14], ebp
        call    FUN_006f4950
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [ecx + 4]
        xor     edi, edi
        test    ebx, ebx
        jbe     L64
        add     ebp, 0x1C8
        xor     esi, esi
    L2B:
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      L49
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [edx]
        cmp     dword ptr [ecx + esi + 8], eax
        jz      L53
    L49:
        inc     edi
        add     esi, 0x38
        cmp     edi, ebx
        jc      L2B
        jmp     L64
    L53:
        push    0
        call    FUN_00707e70
        mov     edx, dword ptr [esp + 0x10]
        fstp    dword ptr [edx + 0x574]
    L64:
        mov     eax, dword ptr [esp + 0x1C]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        call    FUN_005cf880
        mov     bl, al
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        mov     al, bl
        pop     ebx
        pop     ecx
        ret     8
    }


}
