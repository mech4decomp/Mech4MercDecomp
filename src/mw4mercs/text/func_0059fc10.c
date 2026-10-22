/*
 * FUN_0059fc10 (177 B) — Object lookup-or-create method.
 *
 * Looks up an object by key in a container, returns existing or creates
 * new one. Increments refcount and usage counter.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004D1F80(void *dst, int arg, void *src);
extern void *__cdecl FUN_00416B60(void *container, void *key);
extern void __cdecl FUN_00412780(void *obj, void *name);
extern void *__cdecl FUN_004084D0(int size);
extern void *__stdcall FUN_0059F130(void *this);
extern void __cdecl FUN_00416A90(void *container, void *key, void *obj);
extern void __cdecl FUN_004D21C0(void *this);
extern void __cdecl FUN_00523E60(void);

__declspec(naked) void *FUN_0059FC10(void *param1, void *param2, void *param3, void *param4)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x44
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    1
        mov     ebp, ecx
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004D1F80

        mov     ecx, dword ptr [esp + 0x24]
        lea     edi, [ecx + 0x30]
        lea     ebx, [ebp + 0x34]
        push    edi
        mov     ecx, ebx
        call    FUN_00416B60
        mov     esi, eax
        test    esi, esi
        je      create_new

        mov     ecx, dword ptr [esi + 0x1C]
        mov     edx, dword ptr [esp + 0x60]
        inc     ecx
        mov     dword ptr [esi + 0x1C], ecx
        push    edx
        lea     ecx, [esi + 0x20]
        call    FUN_00412780
        jmp     done

create_new:
        push    0x28
        call    FUN_004084D0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      alloc_fail

        mov     eax, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esp + 0x5C]
        push    eax
        push    ecx
        mov     ecx, esp
        push    edx
        call    FUN_00523E60
        mov     eax, dword ptr [esp + 0x60]
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_00523E60
        mov     ecx, esi
        call    FUN_0059F130
        mov     esi, eax
        jmp     insert

alloc_fail:
        xor     esi, esi

insert:
        push    edi
        push    esi
        mov     ecx, ebx
        call    FUN_00416A90

done:
        mov     al, byte ptr [esp + 0x64]
        test    al, al
        je      skip_inc
        inc     dword ptr [esi + 0x24]

skip_inc:
        mov     eax, dword ptr [ebp + 0x50]
        inc     eax
        lea     ecx, [esp + 0x10]
        mov     dword ptr [ebp + 0x50], eax
        call    FUN_004D21C0

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     0x10
    }
}
