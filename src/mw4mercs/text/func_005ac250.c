/*
 * FUN_005ac250 (183 B) - __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 */

extern char __cdecl FUN_005abdb0(int param);
extern void *__cdecl FUN_004084d0(int param);
extern void __cdecl FUN_00415180(void *param);
extern int __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_004179b0(void *param);

__declspec(naked) void __stdcall FUN_005ac250(void *this_, int param_1, float param_2, char param_3)
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
        ret     0xC
L_continue:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_null
        mov eax, dword ptr [DAT_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        fld     dword ptr [esp + 0xC]
        fadd    st(0), st(0)
        mov     dword ptr [esi + 8], 0
        mov     dword ptr [esi + 0xC], 0
        mov     dword ptr [esi], 0x785964
        call    FUN_0075db4a
        mov     dword ptr [esp + 0xC], eax
        fild    dword ptr [esp + 0xC]
        mov     cl, byte ptr [esp + 0x14]
        mov     byte ptr [esi + 0x1C], cl
        push    esi
        fdivr   dword ptr [esp + 0x14]
        lea     ecx, [ebx + 0x14]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x18], 0
        fstp    dword ptr [esi + 0x14]
        call    FUN_004179b0
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xC
L_null:
        xor     esi, esi
        push    esi
        lea     ecx, [ebx + 0x14]
        call    FUN_004179b0
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xC
    }


}
