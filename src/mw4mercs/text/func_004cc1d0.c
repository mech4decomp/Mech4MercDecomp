/*
 * FUN_004cc1d0 (163 B) — __thiscall object constructor (RET 0xc, 3 stack
 * args). Initializes a vtable pointer (0x7719dc) and member fields, then
 * if a source object (arg3) is present, allocates a buffer, copies data
 * via FUN_0041e690, and invokes several virtual methods on the source.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007b8c10;
extern void __cdecl FUN_00415180(int);
extern void * __cdecl FUN_004084d0(int);
extern void * __cdecl FUN_0041e690(void *, int, int);

__declspec(naked) void FUN_004cc1d0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    ebx
        push    ebp
        mov     ebx, ecx
        push    eax
        call    FUN_00415180
        mov     ebp, dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x10]
        xor     eax, eax
        cmp     ebp, eax
        mov     dword ptr [ebx+0x8], eax
        mov     dword ptr [ebx+0xc], eax
        mov     dword ptr [ebx], 0x7719dc
        mov     dword ptr [ebx+0x18], ecx
        mov     dword ptr [ebx+0x14], edx
        mov     dword ptr [ebx+0x10], eax
        jz      ret0
        push    esi
        mov     esi, dword ptr [ebp+0x10]
        push    edi
        mov     edi, dword ptr [ebp+0x18]
        sub     edi, esi
        push    edi
        call    FUN_004084d0
        push    0x20
        mov     esi, eax
        call    FUN_004084d0
        add     esp, 0x8
        test    eax, eax
        jz      L235
        push    0x0
        push    edi
        push    esi
        mov     ecx, eax
        call    FUN_0041e690
        mov     esi, eax
        jmp     L237
    L235:
        xor     esi, esi
    L237:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [ebp]
        push    edi
        mov     ecx, ebp
        mov     dword ptr [ebx+0x10], esi
        mov     dword ptr [esp+0x18], edx
        call    dword ptr [eax+0x4]
        mov     edx, dword ptr [esp+0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [eax+0xc]
        pop     edi
        mov     dword ptr [esi+0x8], 0xffffffec
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0xc
    ret0:
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0xc
    }
}
