/*
 * FUN_005bf280 (333 B) ??? __thiscall (ECX = this), RET 4 (one stack param).
 *
 * If a global flag byte is nonzero and param->[0x10] != 0, allocates an object
 * via FUN_00416110, initializes it (vtables 0x76cd9c/0x77ce78, FUN_0055e240,
 * FUN_0040ccd0), copies fields from param, then calls FUN_004179b0(this+0x94, obj).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00416110(void);
extern void FUN_00415180(void);
extern void FUN_0055e240(void);
extern void FUN_0040ccd0(void);
extern void FUN_0041fd80(void);
extern void FUN_0041fcd0(void);
extern void FUN_004179b0(void);

__declspec(naked) void __stdcall FUN_005bf280(void *param)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f2d20;
extern int DAT_007b8c10;
__asm {
push    ecx
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        /* __emit: MSVC6 drops the displacement for mov [esp],reg (encodes 89 0C 24) */
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17]
        push    ebx
        xor     ebx, ebx
        cmp     al, bl
        push    ebp
        jz      L_5bf3c7
        mov     ebp, dword ptr [esp + 0x10]
        cmp     dword ptr [ebp + 0x10], ebx
        jz      L_5bf3c7
        mov ecx, dword ptr [DAT_007f2d20]
        push    esi
        push    edi
        call    FUN_00416110
        mov     esi, eax
        cmp     esi, ebx
        jz      L_5bf31e
        mov eax, dword ptr [DAT_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        push    ebx
        lea     ecx, [esi + 0x14]
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0055e240
        push    ebx
        lea     ecx, [esi + 0x1c]
        call    FUN_0055e240
        push    0x7b8d88
        lea     ecx, [esi + 0x24]
        mov     dword ptr [esi], 0x77ce78
        mov     dword ptr [esi + 0x10], ebx
        call    FUN_0040ccd0
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0xb4], ebx
        mov     byte ptr [esi + 0xb9], bl
        mov     ebx, esi
    L_5bf31e:
        lea     esi, [ebp + 0x14]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_5bf33c
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        lea     ecx, [ebx + 0x14]
        call    FUN_0041fcd0
    L_5bf33c:
        lea     esi, [ebp + 0x1c]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_5bf35a
        mov     ecx, esi
        call    FUN_0041fd80
        push    eax
        lea     ecx, [ebx + 0x1c]
        call    FUN_0041fcd0
    L_5bf35a:
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0x24]
        mov     eax, dword ptr [ebp + 0x28]
        mov     dword ptr [ebx + 0x10], ecx
        mov     ecx, dword ptr [ebp + 0x2c]
        mov     dword ptr [ebx + 0x2c], ecx
        mov     dword ptr [ebx + 0x24], edx
        mov     edx, dword ptr [ebp + 0x30]
        mov     dword ptr [ebx + 0x28], eax
        mov     al, byte ptr [ebp + 0xb9]
        mov     dword ptr [ebx + 0x30], edx
        mov     edx, dword ptr [ebp + 0xc0]
        lea     edi, [ebx + 0x34]
        lea     esi, [ebp + 0x34]
        mov     ecx, 0x20
        rep     movsd
        mov     ecx, dword ptr [ebp + 0xbc]
        mov     dword ptr [ebx + 0xbc], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     byte ptr [ebx + 0xb9], al
        mov     eax, dword ptr [ebp + 0xc4]
        push    ebx
        add     ecx, 0x94
        mov     dword ptr [ebx + 0xc0], edx
        mov     dword ptr [ebx + 0xc4], eax
        call    FUN_004179b0
        pop     edi
        pop     esi
    L_5bf3c7:
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }


}
