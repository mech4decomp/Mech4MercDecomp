/*
 * FUN_005c8f30 (182 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Validates a target via a vtable method, then applies two random gates
 * (0x4c/0x4d) and a couple of checks; returns 0 or 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_0041fd80(void);
extern int FUN_005dbe50(void);
extern void *__stdcall FUN_00637b40(int a);
extern float FUN_00637a20(void);
extern char __stdcall FUN_00415230(int a);
extern char __stdcall FUN_00683cc0(void *a);

__declspec(naked) void __stdcall FUN_005c8f30(void *param1, void *param2)
{
    

extern int DAT_007f1f84;
__asm {
push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 0x8]
        test    al, al
        mov     edi, dword ptr [esp + 0xc]
        jz      L_8f5b
        lea     ecx, [esi + 0x1c8]
        call    FUN_0041fd80
        cmp     edi, eax
        jz      L_8f5b
        pop     edi
        xor     al, al
        pop     esi
        ret     0x8
    L_8f5b:
        mov     ecx, esi
        call    FUN_005dbe50
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        push    0x4c
        fstp    dword ptr [esp + 0x14]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jz      L_8fdf
        mov     ecx, esi
        call    FUN_005dbe50
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        push    0x4d
        fstp    dword ptr [esp + 0x14]
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_8fdf
        mov eax, dword ptr [DAT_007f1f84]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_8fdf
        mov     ecx, dword ptr [esi + 0x170]
        push    ecx
        call    FUN_00683cc0
        add     esp, 0x4
        cmp     al, 0x1
        jnz     L_8fdf
        pop     edi
        xor     al, al
        pop     esi
        ret     0x8
    L_8fdf:
        pop     edi
        mov     al, 0x1
        pop     esi
        ret     0x8
    }


}
