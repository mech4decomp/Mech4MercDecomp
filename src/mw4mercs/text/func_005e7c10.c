/*
 * FUN_005E7C10 (251 B) — __thiscall, RET 8 (2 params).
 * Complex update/refresh routine. Checks a flag bit in [this+0x10];
 * if clear, does a series of virtual calls and helper calls, then
 * always calls FUN_004DA620(param1, param2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004da2f0(void);
extern void __cdecl FUN_006769c0(void);
extern void __cdecl FUN_005fa300(void);
extern void __cdecl FUN_005fad50(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004da620(void);

__declspec(naked) void __cdecl FUN_005e7c10(void)
{
    
__asm {
push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        push    edi
        jnz     L_5e7cf7
        mov     al, byte ptr [esi + 0x41d]
        test    al, al
        jz      L_5e7c5c
        /* __emit: MSVC6 encodes mov ecx,[imm32] as B9 immediate load, not 8B 0D mem deref */
        _emit   0x8B
        _emit   0x0D
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     edx, dword ptr [ecx]
        /* __emit: MSVC6 encodes xor edx,[imm32] as 81 F2 immediate, not 33 15 mem deref */
        _emit   0x33
        _emit   0x15
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     ecx, dword ptr [edx + 0x20]
        lea     edx, [esi + 0x14]
        push    edx
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        lea     edx, [esi + 0x15c]
        push    edx
        call    dword ptr [eax + 0xb4]
L_5e7c5c:
        mov     ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        jz      L_5e7c6e
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x12c]
L_5e7c6e:
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    FUN_004da2f0
        cmp     ebp, 0x3
        jz      L_5e7c89
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xd8]
L_5e7c89:
        /* __emit: MSVC6 encodes mov ecx,[imm32] as B9 immediate load, not 8B 0D mem deref */
        _emit   0x8B
        _emit   0x0D
        _emit   0x94
        _emit   0xDA
        _emit   0x80
        _emit   0x00
        push    esi
        call    FUN_006769c0
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        push    0x0
        mov     edi, eax
        push    esi
        lea     ecx, [edi + 0x68]
        push    ecx
        mov     ecx, esi
        call    FUN_005fa300
        mov     dx, word ptr [edi + 0x64]
        push    ecx
        mov     cx, word ptr [edi + 0x66]
        mov     eax, esp
        mov     word ptr [eax + 0x2], cx
        mov     ecx, esi
        mov     word ptr [eax], dx
        call    FUN_005fad50
        mov     edi, eax
        test    edi, edi
        jz      L_5e7ced
        lea     ebx, [esi + 0x148]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jnz     L_5e7ced
        mov     ecx, ebx
        call    FUN_0041fcb0
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
L_5e7ced:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xd4]
L_5e7cf7:
        mov     eax, dword ptr [esp + 0x14]
        push    ebp
        push    eax
        mov     ecx, esi
        call    FUN_004da620
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }


}
