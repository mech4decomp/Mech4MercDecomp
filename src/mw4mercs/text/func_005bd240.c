/*
 * FUN_005bd240 (397 B) - Destructor. __thiscall (ECX = this).
 *
 * Sets vtable, destroys sub-objects, iterates arrays of objects calling
 * their virtual destructor, then calls FUN_004d61c0 on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0067f730(void);
extern void __stdcall FUN_004084e0(void *p);
extern void __fastcall FUN_00417ad0(void *p);
extern void __fastcall FUN_00417980(void *p);
extern void __fastcall FUN_004169c0(void *p);
extern void __fastcall FUN_004d61c0(void *p);

__declspec(naked) void __fastcall FUN_005bd240(void *this)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x90]
        mov     ecx, edi
        mov     dword ptr [esi], 0x787150
        call    FUN_0067f730
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
        lea     edi, [esi + 0xb4]
        mov     ebx, 0xff
loop1:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        jz      skip1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     dword ptr [edi], 0x0
skip1:
        add     edi, 0x4
        dec     ebx
        jnz     loop1
        lea     eax, [esi + 0x94]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [eax]
        mov     ebx, 0x78714c
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], ebx
loop2:
        test    eax, eax
        jz      done2
        mov     edi, dword ptr [eax]
        test    edi, edi
        jz      done2
        lea     ecx, [esp + 0x10]
        call    FUN_00417ad0
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
        mov     eax, dword ptr [esp + 0x18]
        jmp     loop2
done2:
        mov     eax, dword ptr [esi + 0xa8]
        lea     ebp, [esi + 0xa8]
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x1c], ebx
loop3:
        test    eax, eax
        jz      done3
        mov     edi, dword ptr [eax]
        test    edi, edi
        jz      done3
        lea     ecx, [esp + 0x1c]
        call    FUN_00417ad0
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
        mov     eax, dword ptr [esp + 0x24]
        jmp     loop3
done3:
        mov     eax, dword ptr [esi + 0x9c]
        lea     ebx, [esi + 0x9c]
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x28], 0x77d010
loop4:
        test    eax, eax
        jz      done4
        mov     edi, dword ptr [eax]
        test    edi, edi
        jz      done4
        lea     ecx, [esp + 0x28]
        call    FUN_00417ad0
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
        mov     eax, dword ptr [esp + 0x30]
        jmp     loop4
done4:
        lea     ecx, [esi + 0x4fc]
        mov     dword ptr [esi + 0xa4], 0x0
        call    FUN_00417980
        lea     ecx, [esi + 0x4f4]
        call    FUN_00417980
        lea     ecx, [esi + 0x4ec]
        call    FUN_00417980
        lea     ecx, [esi + 0x4e4]
        call    FUN_00417980
        lea     ecx, [esi + 0x4dc]
        call    FUN_00417980
        lea     ecx, [esi + 0x4d4]
        call    FUN_00417980
        lea     ecx, [esi + 0x4cc]
        call    FUN_00417980
        lea     ecx, [esi + 0x4c4]
        call    FUN_00417980
        lea     ecx, [esi + 0x4b0]
        call    FUN_004169c0
        mov     ecx, ebp
        call    FUN_00417980
        mov     ecx, ebx
        call    FUN_00417980
        lea     ecx, [esi + 0x94]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_004d61c0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret
    }
}
