/*
 * FUN_00544310 (263 B) — Stream setup/read function.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_004084c0(int, int);
extern int __stdcall FUN_004084d0(int);
extern void __stdcall FUN_004084e0(int);
extern int __stdcall FUN_0041e690(int, int, int);

__declspec(naked) void __stdcall FUN_00544310(int param_1, int param_2)
{
    

extern int DAT_007dd234;
__asm {
mov     eax, dword ptr [esp + 0x4]
        mov     edx, eax
        shl     edx, 0x7
        push    ebx
        add     edx, eax
        shl     edx, 0x3
        push    ebp
        sub     edx, eax
        push    esi
        mov     esi, dword ptr [ecx + edx*8 + 0x3580]
        lea     ebx, [ecx + edx*8]
        push    edi
        xor     edi, edi
        cmp     esi, edi
        jz      loc_544365
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x8], 0xffffffec
        call    dword ptr [edx + 0x4]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        cmp     esi, edi
        jz      loc_54435f
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]

loc_54435f:
        mov     dword ptr [ebx + 0x3580], edi

loc_544365:
        mov     ecx, dword ptr [ebx + 0x3578]
        cmp     ecx, edi
        jz      loc_54437b
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
        mov     dword ptr [ebx + 0x3578], edi

loc_54437b:
        mov eax, dword ptr [DAT_007dd234]
        mov     ebp, dword ptr [esp + 0x18]
        mov     edi, dword ptr [ebp + 0x1c]
        push    eax
        push    edi
        call    FUN_004084c0
        push    0x20
        mov     esi, eax
        call    FUN_004084d0
        add     esp, 0xc
        test    eax, eax
        jz      loc_5443ad
        push    0x0
        push    edi
        push    esi
        mov     ecx, eax
        call    FUN_0041e690
        mov     esi, eax
        jmp     loc_5443af

loc_5443ad:
        xor     esi, esi

loc_5443af:
        mov     edx, dword ptr [ebp]
        mov     dword ptr [ebx + 0x3580], esi
        mov     ebx, dword ptr [esi]
        push    edi
        mov     ecx, ebp
        call    dword ptr [edx + 0x4]
        push    eax
        mov     ecx, esi
        call    dword ptr [ebx + 0x24]
        mov     eax, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [eax + 0xc]
        mov     eax, dword ptr [esi + 0x1c]
        mov     ebp, 0xffffffec
        xor     ebx, ebx
        xor     edi, edi
        test    eax, eax
        mov     dword ptr [esi + 0x8], ebp
        jbe     loc_544404

loc_5443e2:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi + 0x1c]
        and     ecx, 0xff
        add     ebx, ecx
        inc     edi
        cmp     edi, eax
        jb      loc_5443e2

loc_544404:
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        pop     edi
        mov     dword ptr [esi + 0x8], ebp
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }


}
