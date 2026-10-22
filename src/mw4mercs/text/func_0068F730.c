/*
 * FUN_0068F730 (457 B) — __thiscall (this in ecx), RET 4. Iterates a
 * linked list of 0xc-byte nodes (this+4 head, this+0xc tail), computing
 * float coords via fild/fadd/fsub against g_77016c, growing a buffer
 * (FUN_004084d0 alloc), and building output via FUN_005b8a30 /
 * FUN_0040c5d0 / FUN_005b8a00. Wraps with FUN_006f4950 / FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7f2464;
extern float g_77016c;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005b8a30(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_005b8a00(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_0068F730(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [g_7f2464]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        mov     edx, dword ptr [esi + 4]
        mov     esi, dword ptr [esi + 0xc]
        cmp     edx, esi
        mov     dword ptr [esp + 8], edx
        mov     dword ptr [esp + 0x10], esi
        je      L_8ed
        mov     ecx, dword ptr [esp + 0x28]
        push    ebx
        push    ebp
        push    edi
    L_75e:
        mov     eax, dword ptr [edx]
        test    eax, eax
        lea     eax, [eax + eax*4]
        jge     L_779
        shl     eax, 1
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        fsub    dword ptr [g_77016c]
        jmp     L_789
    L_779:
        shl     eax, 1
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        fadd    dword ptr [g_77016c]
    L_789:
        mov     eax, dword ptr [edx + 4]
        test    eax, eax
        lea     eax, [eax + eax*4]
        jge     L_7a5
        shl     eax, 1
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        fsub    dword ptr [g_77016c]
        jmp     L_7b5
    L_7a5:
        shl     eax, 1
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        fadd    dword ptr [g_77016c]
    L_7b5:
        mov     edi, dword ptr [ecx + 4]
        fld     st(1)
        mov     ebp, dword ptr [ecx + 8]
        fstp    dword ptr [esp + 0x24]
        cmp     edi, ebp
        fstp    dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x28], 0
        je      L_7fd
        test    edi, edi
        je      L_7f0
        fstp    dword ptr [edi]
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [edi + 4], eax
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [edi + 8], eax
        add     edi, 0xc
        mov     dword ptr [ecx + 4], edi
        jmp     L_8db
    L_7f0:
        add     edi, 0xc
        fstp    st(0)
        mov     dword ptr [ecx + 4], edi
        jmp     L_8db
    L_7fd:
        mov     esi, dword ptr [ecx]
        fstp    st(0)
        mov     ecx, edi
        sub     ecx, esi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, 1
        mov     dword ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x18], edx
        lea     eax, [esp + 0x10]
        jb      L_82e
        lea     eax, [esp + 0x18]
    L_82e:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x18], eax
        je      L_84d
        lea     edx, [eax + eax*2]
        shl     edx, 2
        push    edx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x10], eax
        jmp     L_855
    L_84d:
        mov     dword ptr [esp + 0x10], 0
    L_855:
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edi
        push    esi
        call    FUN_005b8a30
        mov     ebx, eax
        add     esp, 0x10
        test    ebx, ebx
        je      L_87b
        lea     edx, [esp + 0x24]
        push    edx
        mov     ecx, ebx
        call    FUN_0040c5d0
    L_87b:
        mov     eax, dword ptr [esp + 0x34]
        push    eax
        add     ebx, 0xc
        push    ebx
        push    edi
        push    edi
        call    FUN_005b8a30
        mov     edi, eax
        sub     ebp, esi
        mov     eax, 0x2aaaaaab
        imul    ebp
        sar     edx, 1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        add     esp, 0x10
        push    edx
        mov     edx, dword ptr [esp + 0x38]
        push    esi
        mov     dword ptr [esp + 0x28], esi
        lea     esi, [edx + 8]
        mov     ecx, esi
        call    FUN_005b8a00
        mov     ecx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 4], edi
        mov     ecx, dword ptr [esp + 0x18]
        lea     ecx, [ecx + ecx*2]
        lea     edx, [eax + ecx*4]
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x1c]
    L_8db:
        add     edx, 8
        cmp     edx, esi
        mov     dword ptr [esp + 0x14], edx
        jne     L_75e
        pop     edi
        pop     ebp
        pop     ebx
    L_8ed:
        call    FUN_006f49a0
        pop     esi
        add     esp, 0x20
        ret     4
    }
}
