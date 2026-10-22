/*
 * FUN_005c9070 (412 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Iterates a vector at this->[0x170] (via FUN_00683df0), processes each
 * element through several helper calls, and returns 0/1 based on a mode
 * check (FUN_00684840). Uses an aligned stack frame (AND ESP,-8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005cb300(void *a);
extern void FUN_00683df0(void *a, void *b);
extern void FUN_005cb460(void *a, int b);
extern void *FUN_00684ab0(void *a, void *b, int c);
extern void FUN_00684770(void *a);
extern void FUN_004e8dc0(void *a, void *b);
extern void FUN_00684580(void *a, int b, void *c);
extern void FUN_006847e0(void);
extern int FUN_00684840(int a, int b);
extern void FUN_005cb510(void *a, int b);

__declspec(naked) void __stdcall FUN_005c9070(void *param)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x10c
        push    ebx
        push    esi
        push    edi
        lea     eax, [esp + 0x23]
        mov     esi, ecx
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_005cb300
        mov     edx, dword ptr [esi + 0x170]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edx
        call    FUN_00683df0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, ecx
        sub     edx, eax
        sar     edx, 0x2
        add     esp, 0x8
        cmp     edx, 0x2
        jnc     L_90d6
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005cb460
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_90d6:
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        jz      L_91aa
        mov     ebx, dword ptr [ebp + 0x8]
    L_90e5:
        mov     edx, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [edx]
        push    edi
        lea     eax, [esp + 0xd0]
        push    ebx
        push    eax
        call    FUN_00684ab0
        add     esp, 0xc
        mov     esi, eax
        push    esi
        lea     ecx, [esp + 0x40]
        call    FUN_00684770
        mov     ecx, dword ptr [esi + 0x44]
        mov     edx, dword ptr [esi + 0x48]
        mov     dword ptr [esp + 0x80], ecx
        mov     ecx, dword ptr [esp + 0x6c]
        lea     eax, [esp + 0x24]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [esp + 0x8c], edx
        call    FUN_004e8dc0
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x30], edx
        mov     dword ptr [esp + 0x34], eax
        mov     eax, dword ptr [ebx]
        lea     edx, [esp + 0x30]
        push    edx
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [eax + 0x40]
        push    edi
        push    ecx
        lea     ecx, [esp + 0x94]
        call    FUN_00684580
        lea     ecx, [esp + 0x88]
        call    FUN_006847e0
        mov     esi, dword ptr [ebx + 0x18]
        push    0x1
        push    esi
        lea     ecx, [esp + 0x90]
        call    FUN_00684840
        dec     eax
        jz      L_91ea
        dec     eax
        jnz     L_918f
        test    esi, esi
        jnz     L_918f
        mov     eax, dword ptr [ebx + 0x1c]
        test    eax, eax
        jnz     L_91c8
    L_918f:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x14]
        add     eax, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        jnz     L_90e5
        mov     eax, dword ptr [esp + 0x10]
    L_91aa:
        mov     edx, dword ptr [esp + 0x18]
        sub     edx, eax
        sar     edx, 0x2
        push    edx
        push    eax
        call    FUN_005cb510
        add     esp, 0x8
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_91c8:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        sub     edx, eax
        sar     edx, 0x2
        push    edx
        push    eax
        call    FUN_005cb510
        add     esp, 0x8
        mov     al, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_91ea:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        call    FUN_005cb510
        add     esp, 0x8
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
