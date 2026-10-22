/*
 * FUN_005d33d0 (648 B) — __thiscall, RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005d5820(void);
extern void __stdcall FUN_005d5ea0(void);
extern void __stdcall FUN_0041c540(void);
extern void __stdcall FUN_00419480(void *p);
extern void __stdcall FUN_005d4de0(void);
extern void __stdcall FUN_00551870(void);
extern void __stdcall FUN_0068c6c0(void);
extern void __stdcall FUN_0068c880(void);
extern void __stdcall FUN_004084d0(void);
extern void __stdcall FUN_005d2920(void);
extern void __stdcall FUN_005d2900(void);
extern void __stdcall FUN_0068c640(void);

__declspec(naked) void __stdcall FUN_005d33d0(void)
{
    

extern int DAT_007b220c;
extern int DAT_0077431c;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x41c]
        test    eax, eax
        push    edi
        jz      L_3417
        fld     qword ptr [ebp + 0x8]
        sub     esp, 0x8
        fsub    qword ptr [esi + 0xe4]
        fstp    qword ptr [esp]
        call    FUN_005d5820
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x150]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_3417:
        mov     eax, dword ptr [esi + 0x450]
        test    eax, eax
        jz      L_3452
        fld     qword ptr [ebp + 0x8]
        sub     esp, 0x8
        fsub    qword ptr [esi + 0xe4]
        mov     ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005d5ea0
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x150]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_3452:
        mov     al, byte ptr [esi + 0x30a]
        test    al, al
        jz      L_363d
        mov     eax, dword ptr [esi + 0x3d4]
        test    eax, eax
        jz      L_35d6
        mov     eax, dword ptr [esi + 0x35c]
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        mov ecx, dword ptr [DAT_007b220c]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        lea     edi, [esi + 0x36c]
        push    edi
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x20], 0xbf800000
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_34cc
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [edi + 0x4]
        lea     eax, [esi + 0x384]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edi + 0x8]
        mov     dword ptr [eax + 0x4], edx
        jmp     L_34fe
L_34cc:
        mov     edx, dword ptr [esi + 0x35c]
        mov     eax, dword ptr [edx + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00419480
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        lea     eax, [esi + 0x384]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax + 0x4], edx
L_34fe:
        push    0x40a00000
        lea     ebx, [esi + 0x390]
        push    ebx
        mov     dword ptr [eax + 0x8], ecx
        push    eax
        mov     ecx, esi
        call    FUN_005d4de0
        mov     eax, dword ptr [ebx + 0x4]
        mov     ecx, dword ptr [ebx + 0x8]
        mov     edx, dword ptr [ebx]
        mov     dword ptr [edi + 0x4], eax
        mov eax, dword ptr [DAT_007b220c]
        mov     dword ptr [edi + 0x8], ecx
        push    eax
        lea     ecx, [esp + 0x18]
        mov     dword ptr [edi], edx
        mov     edx, dword ptr [esi + 0x3ac]
        push    ecx
        push    edi
        mov     dword ptr [esi + 0x3a8], edx
        mov     dword ptr [esp + 0x20], 0xbf800000
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_364f
        fld     qword ptr [ebp + 0x8]
        mov     eax, dword ptr [esp + 0x10]
        fsub    qword ptr [esi + 0xe4]
        mov     ebx, dword ptr [esi + 0x3d4]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [eax + 0x2bc]
        mov     edx, dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x3a8]
        push    edx
        push    ecx
        sub     esp, 0xc
        fmul dword ptr [DAT_0077431c]
        mov     ecx, esp
        fstp    dword ptr [esp + 0xc]
        push    edi
        call    FUN_00551870
        mov     ecx, ebx
        call    FUN_0068c6c0
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [edi + 0x4]
        sub     esp, 0xc
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edi + 0x8]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esi + 0x35c]
        mov     dword ptr [eax + 0x8], ecx
        push    edx
        mov     ecx, ebx
        call    FUN_0068c880
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_35d6:
        mov     edi, dword ptr [esi + 0x35c]
        test    edi, edi
        jz      L_364f
        push    0x2c
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 0x4
        test    ebx, ebx
        jz      L_362c
        mov     ecx, edi
        call    FUN_005d2920
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005d2900
        mov     edx, dword ptr [eax]
        sub     esp, 0xc
        mov     ecx, esp
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [ecx + 0x4], edx
        mov     dword ptr [ecx + 0x8], eax
        mov     ecx, ebx
        call    FUN_0068c640
        mov     dword ptr [esi + 0x3d4], eax
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_362c:
        xor     eax, eax
        mov     dword ptr [esi + 0x3d4], eax
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_363d:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [esi]
        push    eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x150]
L_364f:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
