/*
 * FUN_005ac340 (157 B) - __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 */

extern char __cdecl FUN_005abdb0(int param);
extern void *__cdecl FUN_004084d0(int param);
extern void __cdecl FUN_00415180(void *param);
extern void __cdecl FUN_004179b0(void *param);

__declspec(naked) void __stdcall FUN_005ac340(void *this_, int param_1, char param_2)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f20cc;
extern int DAT_007b8c10;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        mov     ebx, ecx
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0xC]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x50]
        push    edx
        call    FUN_005abdb0
        add     esp, 4
        cmp     al, 1
        jz      L_continue
        cmp byte ptr [DAT_007f20cc], 0x1
        jz      L_continue
        xor     eax, eax
        pop     ebx
        ret     8
L_continue:
        push    esi
        push    edi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        xor     edi, edi
        add     esp, 4
        cmp     esi, edi
        jz      L_null
        mov eax, dword ptr [DAT_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 0x10]
        mov     dl, byte ptr [esp + 0x14]
        mov     dword ptr [esi + 0x14], ecx
        push    esi
        lea     ecx, [ebx + 0x14]
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 0xC], edi
        mov     dword ptr [esi], 0x785964
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x18], edi
        mov     byte ptr [esi + 0x1C], dl
        call    FUN_004179b0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     8
L_null:
        xor     esi, esi
        push    esi
        lea     ecx, [ebx + 0x14]
        call    FUN_004179b0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     8
    }


}
