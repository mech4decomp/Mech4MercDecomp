/*
 * FUN_006b1e70 (381 B) — __cdecl, 3 stack params (param_1, param_2, param_3).
 * Reads param_2 from [ESP+0x14] (after 3 pushes) and param_1 from [ESP+0x14]
 * (after 4 pushes). Ends with plain RET (caller cleans up).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041eae0(void);
extern int  __cdecl FUN_0067f7b0(int a, int b, int c);
extern void __cdecl FUN_0041ee20(void);

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void __cdecl FUN_006b1e70(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esi + 0x8]
        push    edi
        sub     ebx, dword ptr [esi + 0x10]
        shl     ebx, 3
        cmp     eax, -0x14
        jz      L1
        lea     ebx, [ebx + eax*1 + -0x8]
L1:
        mov     ebp, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebp + 0x78]
        lea     ecx, [ebp + 0x78]
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [ebp + 0xe0]
        mov     edi, eax
        cmp     dword ptr [ecx + 0x14], 0x1
        jz      L2
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 0x1
        call    FUN_0041eae0
        push    0x1
        push    0x0
        push    0x18
        call    FUN_0067f7b0
        fld     dword ptr [edi + 0x640]
        add     esp, 0xc
        fchs
        push    eax
        mov     eax, dword ptr [edi + 0x640]
        push    eax
        push    ecx
        lea     ecx, [ebp + 0x19c]
        fstp    dword ptr [esp]
        push    ecx
        mov     ecx, esi
        call    FUN_0041ee20
        mov     edx, dword ptr [edi + 0x63c]
        mov     dword ptr [esp + 0x14], edx
        fld     dword ptr [esp + 0x14]
        push    0x1
        push    0x1
        fchs
        push    0x18
        fstp    dword ptr [esp + 0x24]
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [edi + 0x63c]
        push    eax
        push    ecx
        lea     edx, [ebp + 0x198]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x2
        push    0x18
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        lea     edx, [ebp + 0x1cc]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x3
        push    0x18
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [edi + 0x63c]
        push    eax
        push    ecx
        add     ebp, 0x1c8
        push    ebp
        mov     ecx, esi
        call    FUN_0041ee20
        jmp     L3
L2:
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 0x0
        call    FUN_0041eae0
L3:
        mov     eax, dword ptr [esi + 0x14]
        mov     edi, dword ptr [esi + 0x10]
        mov     esi, dword ptr [esi + 0x8]
        sub     eax, edi
        shl     eax, 3
        cmp     esi, -0x14
        jz      L4
        lea     eax, [eax + esi*1 + -0x8]
L4:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     esi, dword ptr [ecx + edx*4 + 0x9ca4]
        add     ecx, 0x9c9c
        sub     eax, ebx
        add     esi, eax
        mov     dword ptr [ecx + edx*4 + 0x8], esi
        mov     edx, dword ptr [ecx + 0xc00]
        pop     edi
        pop     esi
        add     edx, eax
        pop     ebp
        mov     dword ptr [ecx + 0xc00], edx
        pop     ebx
        ret
    }
}
