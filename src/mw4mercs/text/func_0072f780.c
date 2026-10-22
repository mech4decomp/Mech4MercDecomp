/*
 * FUN_0072f780 (385 B) — __thiscall constructor (ECX = this, RET 4).
 *
 * Reads a param struct, converts floats via _ftol (0x0075db4a), and
 * populates a sub-object. Contains a small loop and a vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern float g_786dc8;
extern float g_770120;
extern float g_78096c;

__declspec(naked) void __stdcall FUN_0072f780(void *param)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     esi, dword ptr [ebp]
        mov     ebx, dword ptr [esi + 0x34]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        fld     dword ptr [edi + 0x10]
        call    FUN_0075db4a
        fld     dword ptr [edi + 0x14]
        mov     dword ptr [ebx], eax
        call    FUN_0075db4a
        mov     dword ptr [ebx + 0x4], eax
        mov     dword ptr [esi + 0x14], 0x12
        xor     eax, eax
        lea     ecx, [edi + 0x4]
L0:
        cmp     byte ptr [ecx], 0x0
        jz      L1
        mov     edx, dword ptr [esi + 0x30]
        mov     dword ptr [edx + eax*1], eax
L1:
        add     eax, 0x4
        inc     ecx
        cmp     eax, 0x30
        jl      L0
        cmp     dword ptr [edi + 0x1c], 0xbf800000
        jnz     L2
        mov     dword ptr [esi + 0x18], 0xffffffff
        jmp     L3
L2:
        fld     dword ptr [edi + 0x1c]
        fmul    dword ptr [g_786dc8]
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x18], eax
L3:
        fld     dword ptr [edi + 0x1c]
        fstp    qword ptr [ebp + 0x10]
        fld     dword ptr [edi + 0x20]
        fmul    dword ptr [g_770120]
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x20], eax
        mov     eax, dword ptr [edi]
        test    eax, eax
        jnz     L4
        fld     dword ptr [edi + 0x18]
        fmul    dword ptr [g_770120]
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x4c], eax
        jmp     L5
L4:
        cmp     eax, 0x1
        jnz     L6
        fld     dword ptr [edi + 0x28]
        fmul    dword ptr [g_770120]
        call    FUN_0075db4a
        fld     dword ptr [edi + 0x2c]
        fmul    dword ptr [g_770120]
        mov     dword ptr [esi + 0x4c], eax
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x5c], eax
        jmp     L5
L6:
        jle     L5
        fld     dword ptr [edi + 0x18]
        fmul    dword ptr [g_770120]
        call    FUN_0075db4a
        fld     dword ptr [edi + 0x2c]
        fmul    dword ptr [g_770120]
        mov     dword ptr [esi + 0x4c], eax
        call    FUN_0075db4a
        fld     dword ptr [edi + 0x30]
        fmul    dword ptr [g_786dc8]
        mov     dword ptr [esi + 0x5c], eax
        mov     eax, dword ptr [edi + 0x28]
        mov     dword ptr [esi + 0x6c], eax
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x7c], eax
L5:
        mov     edi, dword ptr [edi + 0x24]
        test    edi, edi
        jz      L7
        fld     dword ptr [edi + 0x4]
        fmul    dword ptr [g_78096c]
        call    FUN_0075db4a
        fld     dword ptr [edi]
        fmul    dword ptr [g_770120]
        mov     dword ptr [esi + 0x94], eax
        call    FUN_0075db4a
        fld     dword ptr [edi + 0xc]
        fmul    dword ptr [g_78096c]
        mov     dword ptr [esi + 0x90], eax
        call    FUN_0075db4a
        fld     dword ptr [edi + 0x8]
        fmul    dword ptr [g_770120]
        mov     dword ptr [esi + 0x9c], eax
        call    FUN_0075db4a
        lea     ecx, [esi + 0x8c]
        mov     dword ptr [esi + 0x98], eax
        mov     dword ptr [esi + 0x38], ecx
        jmp     L8
L7:
        mov     dword ptr [esi + 0x38], 0x0
L8:
        mov     eax, dword ptr [esi + 0x48]
        test    eax, eax
        jz      L9
        mov     edx, dword ptr [eax]
        push    0x141
        add     esi, 0x10
        push    esi
        push    eax
        call    dword ptr [edx + 0x18]
L9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
