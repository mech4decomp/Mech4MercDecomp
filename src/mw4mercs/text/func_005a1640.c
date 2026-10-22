/*
 * FUN_005a1640 (242 B) — Update/render function.
 *
 * __thiscall (ECX = this), RET 0x8 (two stack params).
 * Calls various sub-functions, handles vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void   __stdcall FUN_004da2f0(int);
extern int    __stdcall FUN_006769c0(void *);
extern void   __stdcall FUN_005faa90(void *, void *);
extern int    __stdcall FUN_005fad50(int);
extern void * __stdcall FUN_0041fd80(void);
extern void   __stdcall FUN_0041fcb0(void);
extern void   __stdcall FUN_0041fcd0(void *);
extern void   __stdcall FUN_004da620(int, int);

__declspec(naked) void __fastcall FUN_005a1640(int this_ptr)
{
    

extern int DAT_0080da94;
__asm {
sub     esp, 0xc
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        push    edi
        jnz     skip_body
        mov     ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        jz      after_vcall_1
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x12c]
after_vcall_1:
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    FUN_004da2f0
        cmp     ebp, 0x3
        jz      after_vcall_2
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xd8]
after_vcall_2:
        mov ecx, dword ptr [DAT_0080da94]
        push    esi
        call    FUN_006769c0
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     edi, eax
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [eax + 0x2c]
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [edi + 0x68]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], eax
        call    FUN_005faa90
        mov     dx, word ptr [edi + 0x66]
        push    ecx
        mov     cx, word ptr [edi + 0x64]
        mov     eax, esp
        mov     word ptr [eax], cx
        mov     ecx, esi
        mov     word ptr [eax + 0x2], dx
        call    FUN_005fad50
        mov     edi, eax
        test    edi, edi
        jz      after_sub_call
        lea     ebx, [esi + 0x148]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jnz     after_sub_call
        mov     ecx, ebx
        call    FUN_0041fcb0
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
after_sub_call:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xd4]
skip_body:
        mov     ecx, dword ptr [esp + 0x20]
        push    ebp
        push    ecx
        mov     ecx, esi
        call    FUN_004da620
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }


}
