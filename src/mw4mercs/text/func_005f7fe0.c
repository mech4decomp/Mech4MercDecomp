/*
 * FUN_005f7fe0 (300 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Iterates a loop allocating/building sub-objects and registering them.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void);
extern void __stdcall FUN_004084d0(void);
extern void __stdcall FUN_005f7420(void);
extern void __stdcall FUN_00412a00(void);
extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_00412570(void);
extern void __stdcall FUN_00416b60(void);
extern void __stdcall FUN_004084e0(void);
extern void __stdcall FUN_0041fcd0(void);
extern void __stdcall FUN_005f8110(void);
extern void __stdcall FUN_004179b0(void);
extern void __stdcall FUN_004d21c0(void);

__declspec(naked) void __stdcall FUN_005f7fe0(void *p1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x48
        push    ebp
        push    0x1
        mov     ebp, ecx
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004d1f80
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x24]
        sub     ecx, edx
        add     ecx, eax
        jz      loc_80fc
        push    ebx
        push    esi
        push    edi
loc_800f:
        push    0x24
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      loc_8028
        mov     ecx, eax
        call    FUN_005f7420
        mov     esi, eax
        jmp     loc_802a
loc_8028:
        xor     esi, esi
loc_802a:
        mov     eax, dword ptr [esp + 0x14]
        push    0x4
        lea     edx, [esi + 0x10]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    dword ptr [eax + 0x20]
        lea     ecx, [esp + 0x5c]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        mov     dword ptr [esp + 0x64], 0
        call    FUN_00412a00
        lea     edi, [esi + 0x1c]
        add     esp, 0x8
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     eax, dword ptr [esp + 0x5c]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [ebp + 0x28c]
        call    FUN_00416b60
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      loc_809a
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_809a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_809a:
        push    ebx
        mov     ecx, edi
        call    FUN_0041fcd0
        lea     edi, [esi + 0x14]
        mov     ecx, edi
        call    FUN_0041fcb0
        push    esi
        mov     ecx, ebp
        call    FUN_005f8110
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        push    esi
        lea     ecx, [ebp + 0x3a0]
        call    FUN_004179b0
        mov     eax, dword ptr [esp + 0x5c]
        test    eax, eax
        jz      loc_80e3
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_80e3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_80e3:
        mov     edx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x30]
        sub     edx, ecx
        add     edx, eax
        jnz     loc_800f
        pop     edi
        pop     esi
        pop     ebx
loc_80fc:
        lea     ecx, [esp + 0x8]
        call    FUN_004d21c0
        pop     ebp
        add     esp, 0x48
        ret     0x4
    }
}
